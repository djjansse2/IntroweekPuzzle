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

int I2C_Controller::i2c_file = 0;

std::queue<struct queue_object *> I2C_Controller::read_queue;
std::queue<struct queue_object *> I2C_Controller::write_queue;

const std::string I2C_Controller::i2c_file_path = "/dev/i2c-1";

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

double add(double a, double b){
    return (int)a + (int)b;
}

I2C_Controller::I2C_Controller(){
    int ret;
    DBus::init();

    DBus::Dispatcher::pointer dispatcher = DBus::Dispatcher::create();
    DBus::Connection::pointer conn = dispatcher->create_connection(DBus::BUS_SESSION);

    ret = conn->request_name( "dbuscxx.quickstart_0.server", DBUS_NAME_FLAG_REPLACE_EXISTING );

    DBus::Object::pointer object = conn->create_object("/dbuscxx/quickstart_0");
    object->create_method<double,double,double>("dbuscxx.Quickstart", "add", sigc::ptr_fun(add) );

    //this->object = conn->create_object("puzzeldoos.i2c");

    //object->create_method<void, uint8_t, uint8_t, std::string>("puzzeldoos.i2c", "write", sigc::ptr_fun(I2C_Controller::push_write_message));
    //object->create_method<void, uint8_t, uint8_t, int, std::string>("puzzeldoos.i2c", "read", sigc::ptr_fun(I2C_Controller::push_read_message));

    //object->create_method<int,double,double>("puzzeldoos.i2c", "add", sigc::ptr_fun(add));
}

I2C_Controller::~I2C_Controller(){
    
}

void I2C_Controller::open_i2c_bus(){
    I2C_Controller::i2c_file = open(I2C_Controller::i2c_file_path.c_str(), O_RDWR);
    if(I2C_Controller::i2c_file < 0){
       printf("failed to open i2c bus");
       exit(I2C_Controller::i2c_file);
    }
}

void I2C_Controller::close_i2c_bus(){
    close(I2C_Controller::i2c_file);
}

void I2C_Controller::open_slave(int slaveAddres){
    int check = ioctl(I2C_Controller::i2c_file, I2C_SLAVE, slaveAddres);
    if (check < 0)
    {
       printf("failed to talk to slave");
       exit(check);
    }
}

int I2C_Controller::write_i2c_bus(int slaveAddres, uint8_t * buffer, size_t count){
    printf("%s\n", buffer);
    
    I2C_Controller::open_i2c_bus();
    I2C_Controller::open_slave(slaveAddres);

    size_t count_check = write(I2C_Controller::i2c_file, buffer, count);

    I2C_Controller::close_i2c_bus();

    if(count != count_check){
        printf("write to slave failed!\n");
        return -1;
    }

    return count_check;
}

int I2C_Controller::read_i2c_bus(int slaveAddres, uint8_t * buffer, size_t count){
    I2C_Controller::open_i2c_bus();
    I2C_Controller::open_slave(slaveAddres);

    size_t count_check = read(I2C_Controller::i2c_file, buffer, count);

    I2C_Controller::close_i2c_bus();

    if(count != count_check){
        printf("read of slave failed!\n");
        return -1;
    }

    return count_check;
}

void I2C_Controller::handle_queues(){
    if (!I2C_Controller::read_queue.empty())
    {
        struct queue_object * object = I2C_Controller::read_queue.front();
        I2C_Controller::read_queue.pop();

        uint8_t buffer[object->amountOfBytes];

        I2C_Controller::read_i2c_bus(object->slaveAddress, buffer, object->amountOfBytes);

        //TODO: return message to sender with reply
    }
    
    if (!I2C_Controller::write_queue.empty())
    {
        struct queue_object * object = I2C_Controller::write_queue.front();
        I2C_Controller::write_queue.pop();

        uint8_t buffer[object->message.size()];
        
        strcpy((char *)buffer, object->message.c_str());

        I2C_Controller::write_i2c_bus(object->slaveAddress, buffer, object->message.size());

        //TODO: return message to sender with reply
    }
}

void I2C_Controller::push_read_message(uint8_t dbusAddress, uint8_t slaveAddress, int byteCount, std::string callback){
    struct queue_object * object = new struct queue_object;
    object->amountOfBytes = byteCount;
    object->dbusAddres = dbusAddress;
    object->slaveAddress = slaveAddress;
    object->message = callback;

    I2C_Controller::read_queue.push(object);
}

void I2C_Controller::push_write_message(uint8_t dbusAddress, uint8_t slaveAddress, std::string message){
    struct queue_object * object = new struct queue_object;
    object->message = message;
    object->dbusAddres = dbusAddress;
    object->slaveAddress = slaveAddress;

    I2C_Controller::write_queue.push(object);
}