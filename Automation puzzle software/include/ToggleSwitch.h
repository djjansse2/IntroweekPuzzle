#pragma once

#include "Automation_settings.h"

typedef uint16_t VALVE_BIT;

#define VALVE_0_BIT           (VALVE_BIT)(1 << 0)
#define VALVE_1_BIT           (VALVE_BIT)(1 << 1)
#define VALVE_2_BIT           (VALVE_BIT)(1 << 2)
#define VALVE_3_BIT           (VALVE_BIT)(1 << 3)
#define VALVE_4_BIT           (VALVE_BIT)(1 << 4)
#define VALVE_5_BIT           (VALVE_BIT)(1 << 5)
#define VALVE_6_BIT           (VALVE_BIT)(1 << 6)
#define VALVE_7_BIT           (VALVE_BIT)(1 << 7)
#define VALVE_8_BIT           (VALVE_BIT)(1 << 8)
#define VALVE_9_BIT          (VALVE_BIT)(1 << 9)

class ToggleSwitch
{
private:
    /* data */
    static const int AMOUNT_OF_VALVES = 10;

    int switchPin;

    int switchOldState = 0;
    
    uint16_t boundValves = 0;

    void toggle_all();
    void toggle_valve(VALVE_BIT bit);

public:
    ToggleSwitch(/* args */);
    ~ToggleSwitch();

    void begin(int switchPin, VALVE_BIT valves);
    bool valve_update();

    static bool is_valve_open(VALVE_BIT valve);
};



