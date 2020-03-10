#include <Arduino.h>

#include "Interpreter.h"

int assembly[8] = {1, 1, 2, 100, 1, 0, 2, 2000};
Interpreter* myInterpreter = new Interpreter(assembly, 8);

void setup()
{
	pinMode(2, OUTPUT);
	Serial.begin(9600);
}

void loop()
{
	myInterpreter->runAssembly();
}