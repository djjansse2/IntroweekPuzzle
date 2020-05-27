#pragma once

#include <mutex>
#include <chrono>
#include <thread>

#include "I2C_Controller.h"

class Automation{

    /* SIGNLETON PATTERN BEGIN*/
    private:
        Automation();
        ~Automation();

        static std::mutex _singletonLock;
        static Automation * _instance;

    public:
        static Automation * getInstance();
    /* SINGLETON PATTERN END */

    /* GAME LOGICS BEGIN */
    private:
        std::chrono::system_clock::time_point timeSinceLastChange = std::chrono::system_clock::now();

        I2C_Controller * I2CBus = I2C_Controller::getInstance();

        const int slaveAddress = 0x44;

        uint8_t winValue = 0b00011111;
        uint8_t lastValue = 0;
    public:
        bool isPuzzleSolved(); 
        bool isGameRunning(); 

        uint16_t getNewConfig();

        void sleepGame();

    /* GAME LOGICS END */
};