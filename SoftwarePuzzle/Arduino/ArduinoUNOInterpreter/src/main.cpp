#include <Arduino.h>

#include "Arduino_FreeRTOS.h"
#include "task.h"

#include "Interpreter.h"

int assembly[8] = {1, 1, 2, 100, 1, 0, 2, 2000};
Interpreter* myInterpreter = new Interpreter(assembly, 8);

void taskIdle(void *pvParameters);

void setup()
{
	pinMode(2, OUTPUT);
	Serial.begin(9600);

	xTaskCreate (
		taskIdle,
		"IdleTask",
		128,
		NULL,
		0,
		NULL
	);
}

void loop()
{
	// myInterpreter->runAssembly();
}

void taskIdle(void *pvParameters)
{
	
}