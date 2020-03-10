#ifndef Serial
#define Serial

#include "simba.h"

/*
 * Variables
 */
static struct uart_driver_t uart;
static char buf[32];

/*
 * Functions
 */
void SerialBegin();
void SerialWrite(char* aMessage);

#endif