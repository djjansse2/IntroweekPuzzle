#include <iostream>

#include "Automation.h"
#include "string.h"

#pragma region SINGLETON

Automation * Automation::_instance = nullptr;
std::mutex Automation::_singletonLock;

Automation * Automation::getInstance(){
    if (Automation::_instance == nullptr)
    {
        std::lock_guard<std::mutex>lock(Automation::_singletonLock);

        if (Automation::_instance == nullptr)
        {
            Automation::_instance = new Automation();
        }
    }
    
    return Automation::_instance;
}

Automation::Automation(){

}

Automation::~Automation(){

}

#pragma endregion SINGLETON

#pragma region GAME_LOGICS

bool Automation::isPuzzleSolved(){
    uint8_t buffer[1];
    buffer[0]= 0;

    int result = this->I2CBus->read_i2c_bus(slaveAddress, buffer, 1);

    if (this->lastValue != buffer[0] && result > 0)
    {
        this->timeSinceLastChange = std::chrono::system_clock::now();
    }

    this->lastValue = buffer[0];

    std::chrono::system_clock::time_point now = std::chrono::system_clock::now();
    int secondDifference = std::chrono::duration_cast<std::chrono::seconds>(now - this->timeSinceLastChange).count();
    const int minimumTimeDifference = 5;

    if (this->winValue == buffer[0] && secondDifference >= minimumTimeDifference)
    {
        return true;
    }

    return false;
}

bool Automation::isGameRunning(){
    //ask the master program with the dbus controller
    return true; //TODO: IMPLEMENT
}

uint16_t Automation::getNewConfig(){
    //get a new config from the master and upload it to the game board;
    return 0; //TODO: IMPLEMENT
}

void Automation::sleepGame(){
    char buffer[3];
    buffer[1] = ':';
    buffer[2] = '\0';

    for (size_t i = 0; i < 5; i++)
    {
        buffer[0] = i + '0';
        this->I2CBus->write_i2c_bus(slaveAddress, (uint8_t *)buffer, strlen(buffer));
        std::this_thread::sleep_for(std::chrono::milliseconds(10));
    }
    //TODO: IMPLEMENT
}

#pragma endregion GAME_LOGICS