#include "simba.h"
#include "HardwareInterface.h"

void hardwareSetup()
{
    pin_init(&led, &pin_d2_dev, PIN_OUTPUT);
    pin_write(&led, 1);
}