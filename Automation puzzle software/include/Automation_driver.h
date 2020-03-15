#pragma once 

#include "Adafruit_NeoPixel.h"

#include "ToggleSwitch.h"
#include "Pipe.h"

class Automation_driver
{
private:
    /* data */
    Adafruit_NeoPixel neoPixel;

    ToggleSwitch    toggleSwitch1, 
                    toggleSwitch2, 
                    toggleSwitch3, 
                    toggleSwitch4, 
                    toggleSwitch5;

    Pipe            pipe1,
                    pipe2,
                    pipe3,
                    pipe4,
                    pipe5,
                    pipe6,
                    pipe7,
                    pipe8,
                    pipe9,
                    pipe10,
                    pipe11,
                    pipe12,
                    pipe13,
                    pipe14;
                    
    void initialize_hardware();

public:
    Automation_driver(/* args */);
    ~Automation_driver();
    void begin();

public:
    void test();
};


