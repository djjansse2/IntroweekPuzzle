#pragma once

#include <mutex>
#include <queue>
#include <string>

struct queue_object{
    uint8_t dbusAddres;
    uint8_t slaveAddress;
    int amountOfBytes;
    std::string message;
};

class I2C_Controller{
    /* SIGNLETON PATTERN BEGIN*/
    private:
        I2C_Controller();
        ~I2C_Controller();

        static std::mutex _singletonLock;
        static I2C_Controller * _instance;

    public:
        static I2C_Controller * getInstance();
    /* SINGLETON PATTERN END */

    private:
        const char * i2c_file_path = "/dev/i2c-1";
        int i2c_file = 0;

        void open_slave(int);

        void open_i2c_bus();
        void close_i2c_bus();

        std::queue<struct queue_object *> read_queue;
        std::queue<struct queue_object *> write_queue;

    public:
        int write_i2c_bus(int slaveAddres, uint8_t * buffer, size_t count);
        int read_i2c_bus(int slaveAddres, uint8_t * buffer, size_t count);

        void handle_queues();

        void push_read_message(uint8_t dbusAddress, uint8_t slaveAddres, int byteCount);
        void push_write_message(uint8_t dbusAddress, uint8_t slaveAddress, std::string message);
};
