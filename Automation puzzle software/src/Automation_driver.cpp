#include "Automation_driver.h"


#include "Automation_settings.h"


Automation_driver::Automation_driver(/* args */)
{
}   

Automation_driver::~Automation_driver()
{
}

void Automation_driver::begin(){
    this->initialize_hardware();

    this->pipe1.begin(  PIXEL_25_BIT| PIXEL_26_BIT | PIXEL_27_BIT | PIXEL_28_BIT, 
                        &this->neoPixel, true);
    this->pipe2.begin(  PIXEL_29_BIT | PIXEL_30_BIT | PIXEL_31_BIT, 
                        &this->neoPixel, false);
    this->pipe3.begin(  PIXEL_34_BIT, 
                        &this->neoPixel, true);
    this->pipe4.begin(  PIXEL_35_BIT | PIXEL_36_BIT | PIXEL_37_BIT, 
                        &this->neoPixel, false);
    this->pipe5.begin(  PIXEL_19_BIT | PIXEL_20_BIT | PIXEL_21_BIT | PIXEL_22_BIT | PIXEL_23_BIT | PIXEL_24_BIT, 
                        &this->neoPixel, true);
    this->pipe6.begin(  PIXEL_42_BIT | PIXEL_43_BIT | PIXEL_43_BIT | PIXEL_44_BIT | PIXEL_45_BIT | PIXEL_46_BIT | PIXEL_47_BIT | PIXEL_48_BIT | PIXEL_32_BIT | PIXEL_33_BIT,
                        &this->neoPixel, false);//TODO: needs to be divid in two pipes
    this->pipe7.begin(  PIXEL_11_BIT,
                        &this->neoPixel, true);
    this->pipe8.begin(  PIXEL_4_BIT | PIXEL_5_BIT | PIXEL_6_BIT | PIXEL_7_BIT | PIXEL_8_BIT | PIXEL_9_BIT | PIXEL_10_BIT | PIXEL_38_BIT | PIXEL_39_BIT | PIXEL_40_BIT,
                        &this->neoPixel, true);//TODO: needs to be divid in two pipes
    this->pipe9.begin(  PIXEL_12_BIT | PIXEL_13_BIT | PIXEL_14_BIT | PIXEL_15_BIT,
                        &this->neoPixel, false);
    this->pipe10.begin( PIXEL_49_BIT | PIXEL_50_BIT | PIXEL_51_BIT | PIXEL_52_BIT,
                        &this->neoPixel, false);
    this->pipe11.begin( PIXEL_0_BIT | PIXEL_1_BIT | PIXEL_2_BIT | PIXEL_3_BIT,
                        &this->neoPixel, true);
    this->pipe12.begin( PIXEL_16_BIT,
                        &this->neoPixel, true);                   
    this->pipe13.begin( PIXEL_41_BIT,
                        &this->neoPixel, true);
    this->pipe14.begin( PIXEL_17_BIT | PIXEL_18_BIT,
                        &this->neoPixel, true);

    this->toggleSwitch1.begin(SW_0_PIN, VALVE_0_BIT | VALVE_1_BIT | VALVE_2_BIT);
    this->toggleSwitch2.begin(SW_1_PIN, VALVE_2_BIT | VALVE_3_BIT);
    this->toggleSwitch3.begin(SW_2_PIN, VALVE_4_BIT | VALVE_5_BIT);
    this->toggleSwitch4.begin(SW_3_PIN, VALVE_6_BIT | VALVE_7_BIT);
    this->toggleSwitch5.begin(SW_4_PIN, VALVE_8_BIT | VALVE_9_BIT);
}

void Automation_driver::test(){

    this->toggleSwitch1.valve_update();
    this->toggleSwitch2.valve_update();
    this->toggleSwitch3.valve_update();
    this->toggleSwitch4.valve_update();
    this->toggleSwitch5.valve_update();

    this->pipe1.set_color_by_valve(VALVE_6_BIT, {10, 0, 0});
    this->pipe2.set_color_by_valve(VALVE_7_BIT, {10, 0, 0});
    this->pipe3.set_color_by_valve(VALVE_8_BIT, {10, 3, 0});
    this->pipe4.set_color_by_valve(VALVE_8_BIT, {0, 0, 10});
    this->pipe5.set_color_by_valve(VALVE_5_BIT, {10, 3, 0});
    this->pipe6.set_color_by_mix(this->pipe2, this->pipe3);
    this->pipe7.set_color_by_valve(VALVE_3_BIT, this->pipe8);
    this->pipe8.set_color_by_mix(this->pipe4, this-> pipe13);
    this->pipe9.set_color_by_mix(this->pipe1, this->pipe7);
    this->pipe10.set_color_by_valve(VALVE_1_BIT, this->pipe6);
    this->pipe11.set_color_by_valve(VALVE_0_BIT, this->pipe8);
    this->pipe12.set_color_by_valve(VALVE_2_BIT, this->pipe9);
    this->pipe13.set_color_by_valve(VALVE_4_BIT, this->pipe6);
    this->pipe14.set_color_by_mix(this->pipe5, this->pipe12);

    this->neoPixel.show();
}

void Automation_driver::initialize_hardware(){
    //TODO: optimize with a for each loop
    pinMode(LED_0_PIN, OUTPUT);
    pinMode(LED_1_PIN, OUTPUT);
    pinMode(LED_2_PIN, OUTPUT);
    pinMode(LED_3_PIN, OUTPUT);
    pinMode(LED_4_PIN, OUTPUT);
    pinMode(LED_5_PIN, OUTPUT);
    pinMode(LED_6_PIN, OUTPUT);
    pinMode(LED_7_PIN, OUTPUT);
    pinMode(LED_8_PIN, OUTPUT);
    pinMode(LED_9_PIN, OUTPUT);

    digitalWrite(LED_0_PIN, HIGH);
    digitalWrite(LED_1_PIN, HIGH);
    digitalWrite(LED_2_PIN, HIGH);
    digitalWrite(LED_3_PIN, HIGH);
    digitalWrite(LED_4_PIN, HIGH);
    digitalWrite(LED_5_PIN, HIGH);
    digitalWrite(LED_6_PIN, HIGH);
    digitalWrite(LED_7_PIN, HIGH);
    digitalWrite(LED_8_PIN, HIGH);
    digitalWrite(LED_9_PIN, HIGH);

    pinMode(SW_0_PIN, INPUT_PULLUP);
    pinMode(SW_1_PIN, INPUT_PULLUP);
    pinMode(SW_2_PIN, INPUT_PULLUP);
    pinMode(SW_3_PIN, INPUT_PULLUP);
    pinMode(SW_4_PIN, INPUT_PULLUP);

    this->neoPixel = Adafruit_NeoPixel(NUMBER_OF_PIXELS, NEO_PIXEL_PIN, NEO_GRB + NEO_KHZ800);
    this->neoPixel.begin();

    for (int i = 0; i < NUMBER_OF_PIXELS; i++)
    {
        this->neoPixel.setPixelColor(i, neoPixel.Color(0,0,0));
    }
}

