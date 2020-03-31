#include <Arduino.h>

#include "Adafruit_NeoPixel.h"
#include "Automation_driver.h"

/*driver for the automation puzzle*/
Automation_driver driver;

void setup() {

  /*Initialize the driver*/
  driver.begin();
  Serial.begin(9600);
}

void loop() {
  
  driver.run();
}