#include "I2C_Controller.h"

#include <linux/i2c-dev.h>
#include <sys/ioctl.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

I2C_Controller * I2C_Controller::_instance = nullptr;
std::mutex I2C_Controller::_singletonLock;

I2C_Controller * I2C_Controller::getInstance(){
    if (I2C_Controller::_instance == nullptr)
    {
        std::lock_guard<std::mutex>lock(I2C_Controller::_singletonLock);

        if (I2C_Controller::_instance == nullptr)
        {
            I2C_Controller::_instance = new I2C_Controller();
        }
    }
    
    return I2C_Controller::_instance;
}

I2C_Controller::I2C_Controller(){

}

I2C_Controller::~I2C_Controller(){
    
}

void I2C_Controller::open_i2c_bus(){
    this->i2c_file = open(this->i2c_file_path, O_RDWR);
    if(this->i2c_file < 0){
       printf("failed to open i2c bus");
       exit(this->i2c_file);
    }
}

void I2C_Controller::close_i2c_bus(){
    close(this->i2c_file);
}

void I2C_Controller::open_slave(int slaveAddres){
    int check = ioctl(this->i2c_file, I2C_SLAVE, slaveAddres);
    if (check < 0)
    {
       printf("failed to talk to slave");
       exit(check);
    }
}

int I2C_Controller::write_i2c_bus(int slaveAddres, uint8_t * buffer, size_t count){
    this->open_i2c_bus();
    this->open_slave(slaveAddres);

    size_t count_check = write(this->i2c_file, buffer, count);

    this->close_i2c_bus();

    if(count != count_check){
        printf("write to slave failed!\n");
        return -1;
    }

    return count_check;
}

int I2C_Controller::read_i2c_bus(int slaveAddres, uint8_t * buffer, size_t count){
    this->open_i2c_bus();
    this->open_slave(slaveAddres);

    size_t count_check = read(this->i2c_file, buffer, count);

    this->close_i2c_bus();

    if(count != count_check){
        printf("read of slave failed!\n");
        return -1;
    }

    return count_check;
}

void I2C_Controller::handle_queues(){
    if (!this->read_queue.empty())
    {
        struct queue_object * object = this->read_queue.front();
        this->read_queue.pop();

        uint8_t buffer[object->amountOfBytes];

        this->read_i2c_bus(object->slaveAddress, buffer, object->amountOfBytes);

        //TODO: return message to sender with reply
    }
    
    if (!this->write_queue.empty())
    {
        struct queue_object * object = this->write_queue.front();
        this->write_queue.pop();

        uint8_t buffer[object->message.size()];
        
        strcpy((char *)buffer, object->message.c_str());

        this->write_i2c_bus(object->slaveAddress, buffer, object->message.size());

        //TODO: return message to sender with reply
    }
}

void I2C_Controller::push_read_message(uint8_t dbusAddress, uint8_t slaveAddress, int byteCount){
    struct queue_object * object = new struct queue_object;
    object->amountOfBytes = byteCount;
    object->dbusAddres = dbusAddress;
    object->slaveAddress = slaveAddress;

    this->read_queue.push(object);
}

void I2C_Controller::push_write_message(uint8_t dbusAddress, uint8_t slaveAddress, std::string message){
    struct queue_object * object = new struct queue_object;
    object->message = message;
    object->dbusAddres = dbusAddress;
    object->slaveAddress = slaveAddress;

    this->write_queue.push(object);
}