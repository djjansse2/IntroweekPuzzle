#include "Serial.h"

void SerialBegin()
{
    uart_module_init();
    uart_init(&uart, &uart_device[0], 38400, buf, sizeof(buf));
    uart_start(&uart);
}

void SerialWrite(char* aMessage)
{
    uart_write(&uart, aMessage, sizeof(aMessage));
}