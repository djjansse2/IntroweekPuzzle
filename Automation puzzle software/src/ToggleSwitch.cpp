#include <Arduino.h>
#include "ToggleSwitch.h"

ToggleSwitch::ToggleSwitch(/* args */)
{
}

ToggleSwitch::~ToggleSwitch()
{
}

void ToggleSwitch::begin(int switchPin, VALVE_BIT valves){
    this->switchPin = switchPin;
    this->boundValves = valves;

    bool isSwitchOn = static_cast<bool>(digitalRead(switchPin)); 

    this->switchOldState = isSwitchOn;

    if (isSwitchOn){
        this->toggle_all();
    }
}

void ToggleSwitch::begin(int switchPin){
    this->switchPin = switchPin;
    this->boundValves = 0;
}

void ToggleSwitch::set_valve_bits(VALVE_BIT valves){
    bool isSwitchOn = static_cast<bool>(digitalRead(this->switchPin)); 

    this->switchOldState = isSwitchOn;

    if (isSwitchOn){
        this->toggle_all();
        this->boundValves = valves;
        this->toggle_all();
    }else{
        this->boundValves = valves;
    }
}

bool ToggleSwitch::valve_update(){
    bool isSwitchOn = static_cast<bool>(digitalRead(this->switchPin));

    
    if (isSwitchOn != this->switchOldState) {
        this->toggle_all();
        this->switchOldState = isSwitchOn;
    }

    return isSwitchOn;
}

void ToggleSwitch::toggle_valve(VALVE_BIT bit){
    switch (bit)
    {
    case VALVE_0_BIT:
        digitalWrite(LED_0_PIN, !digitalRead(LED_0_PIN));
        break;
    case VALVE_1_BIT:
        digitalWrite(LED_1_PIN, !digitalRead(LED_1_PIN));
        break;
    case VALVE_2_BIT:
        digitalWrite(LED_2_PIN, !digitalRead(LED_2_PIN));
        break;
    case VALVE_3_BIT:
        digitalWrite(LED_3_PIN, !digitalRead(LED_3_PIN));
        break;
    case VALVE_4_BIT:
        digitalWrite(LED_4_PIN, !digitalRead(LED_4_PIN));
        break;
    case VALVE_5_BIT:
        digitalWrite(LED_5_PIN, !digitalRead(LED_5_PIN));
        break;
    case VALVE_6_BIT:
        digitalWrite(LED_6_PIN, !digitalRead(LED_6_PIN));
        break;
    case VALVE_7_BIT:
        digitalWrite(LED_7_PIN, !digitalRead(LED_7_PIN));
        break;
    case VALVE_8_BIT:
        digitalWrite(LED_8_PIN, !digitalRead(LED_8_PIN));
        break;
    case VALVE_9_BIT:
        digitalWrite(LED_9_PIN, !digitalRead(LED_9_PIN));
        break;
    default:
        break;
    }
}

void ToggleSwitch::toggle_all(){
    for (int i = 0; i < this->AMOUNT_OF_VALVES; i++)
    {
        VALVE_BIT pin = (this->boundValves & (0x1 << i));
        if  (!!pin) {
            this->toggle_valve(pin);
        }
    }
}

bool ToggleSwitch::is_valve_open(VALVE_BIT valve){
    switch (valve)
    {
    case VALVE_0_BIT:
        return !static_cast<bool>(digitalRead(LED_0_PIN));
    case VALVE_1_BIT:
        return !static_cast<bool>(digitalRead(LED_1_PIN));
    case VALVE_2_BIT:
        return !static_cast<bool>(digitalRead(LED_2_PIN));
    case VALVE_3_BIT:
        return !static_cast<bool>(digitalRead(LED_3_PIN));
    case VALVE_4_BIT:
        return !static_cast<bool>(digitalRead(LED_4_PIN));
    case VALVE_5_BIT:
        return !static_cast<bool>(digitalRead(LED_5_PIN));
    case VALVE_6_BIT:
        return !static_cast<bool>(digitalRead(LED_6_PIN));
    case VALVE_7_BIT:
        return !static_cast<bool>(digitalRead(LED_7_PIN));
    case VALVE_8_BIT:
        return !static_cast<bool>(digitalRead(LED_8_PIN));
    case VALVE_9_BIT:
        return !static_cast<bool>(digitalRead(LED_9_PIN));
    default:
        return false;
    }
}