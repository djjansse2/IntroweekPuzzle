#include "simba.h"

#include "Interpreter.h"
#include "HardwareInterface.h"

int assembly[8] = {1, 1, 2, 100, 1, 0, 2, 2000};

void performAction(char aAction);

void setup()
{
    hardwareSetup();
    setAssembly(assembly, 8);
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