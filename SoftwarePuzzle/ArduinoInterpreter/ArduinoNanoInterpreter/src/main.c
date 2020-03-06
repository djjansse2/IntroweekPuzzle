#include "simba.h"

struct pin_driver_t led;

void setup()
{
    pin_init(&led, &pin_d2_dev, PIN_OUTPUT);
    pin_write(&led, 1);
}

void loop()
{
    thrd_sleep_ms(500);

    pin_toggle(&led);
}

int main(void)
{
    sys_start();

    setup();

    while (1)
    {
        loop();
    }

    return 0;
}