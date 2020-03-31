#pragma once 

#include "Adafruit_NeoPixel.h"

#include "ToggleSwitch.h"
#include "Pipe.h"

#define AMOUNT_OF_PIPES (int)(18) 
#define AMOUNT_OF_SWITCHES (int)(5)

#define PIPE_1          (int)(0)
#define PIPE_2          (int)(1)
#define PIPE_3          (int)(2)
#define PIPE_4          (int)(3)
#define PIPE_5          (int)(4)
#define PIPE_6_A        (int)(5)
#define PIPE_7          (int)(6)
#define PIPE_8_A        (int)(7)
#define PIPE_9          (int)(8)
#define PIPE_10         (int)(9)
#define PIPE_11         (int)(10)
#define PIPE_12         (int)(11)
#define PIPE_13         (int)(12)
#define PIPE_14         (int)(13)
#define PIPE_8_B        (int)(14)
#define PIPE_8_C        (int)(15)
#define PIPE_6_B        (int)(16)
#define PIPE_6_C        (int)(17)

#define TOGGLESWITCH_1  (int)(0)
#define TOGGLESWITCH_2  (int)(1)
#define TOGGLESWITCH_3  (int)(2)
#define TOGGLESWITCH_4  (int)(3)
#define TOGGLESWITCH_5  (int)(4)

#define SLAVE_ADDRESS   (int)(0x44)

class Automation_driver
{
private:
    /* data */
    Adafruit_NeoPixel   neoPixel;

    ToggleSwitch        toggleSwitches[AMOUNT_OF_SWITCHES];

    Pipe                pipes[AMOUNT_OF_PIPES];
                    
    void                initialize_hardware();

private:
    void                check_switches();//TODO: make this member
    void                update_pipes();//TODO: make this member

    void                interpret_message();
    void                update_switch(int toggleSwitch, VALVE_BIT valves);
    void                interpret_string(String switchMessage);

public:
    Automation_driver(/* args */);
    ~Automation_driver();
    void begin();

public:
    void                run();
};


