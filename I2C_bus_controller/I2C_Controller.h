#pragma once

#include <mutex>
#include <queue>
#include <string>

#include <dbus-cxx-0.11/dbus-cxx.h>

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
        static const std::string i2c_file_path;
        static int i2c_file;

        static void open_slave(int);

        static void open_i2c_bus();
        static void close_i2c_bus();

        static std::queue<struct queue_object *> read_queue;
        static std::queue<struct queue_object *> write_queue;

        static int write_i2c_bus(int slaveAddres, uint8_t * buffer, size_t count);
        static int read_i2c_bus(int slaveAddres, uint8_t * buffer, size_t count);

        //DBus stuff
        DBus::Dispatcher::pointer dispatcher;
        DBus::Connection::pointer conn;
        DBus::Object::pointer object;

    public:
        void handle_queues();

        static void push_read_message(uint8_t dbusAddress, uint8_t slaveAddres, int byteCount, std::string);
        static void push_write_message(uint8_t dbusAddress, uint8_t slaveAddress, std::string message);
};
