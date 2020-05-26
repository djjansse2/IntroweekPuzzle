#include "simba.h"

#include "Interpreter.h"
#include "HardwareInterface.h"
#include "Serial.h"

int assembly[8] = {1, 1, 2, 100, 1, 0, 2, 2000};

void setup()
{
    hardwareSetup();
    setAssembly(assembly, 8);
    SerialBegin();
}

void loop()
{
    runAssembly();
    // std_printf(OSTR("Hello World\r\n"));
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