#include "simba.h"

#define LED_ON  'a'
#define LED_OFF 'b'
#define WAIT    'c'

struct pin_driver_t led;

char assembly[10] = {'a', 'c', 'c', 'b', 'c', 'c', 'a', 'c', 'b', 'c'};

void performAction(char aAction);

void setup()
{
    pin_init(&led, &pin_d2_dev, PIN_OUTPUT);
    pin_write(&led, 1);
}

void loop()
{
    // thrd_sleep_ms(500);

    // pin_toggle(&led);

    for (int i = 0; i < 10; i++)
    {
        performAction(assembly[i]);
    }
}

void performAction(char aAction)
{
    switch(aAction)
    {
        case LED_ON:
            pin_write(&led, 1);
            break;
        case LED_OFF:
            pin_write(&led, 0);
            break;
        case WAIT:
            thrd_sleep_ms(500);
            break;

        default:
            break;
    }
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