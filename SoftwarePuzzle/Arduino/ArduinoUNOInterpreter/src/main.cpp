#include <Arduino.h>

#include "Arduino_FreeRTOS.h"
#include "task.h"

#include "Interpreter.h"

int assembly[8] = {1, 1, 2, 100, 1, 0, 2, 2000};
static Interpreter* myInterpreter = new Interpreter(assembly, 8);


void taskIdle(void *pvParameters);
void taskReadPort(void* pvParameters);

void setup()
{
	pinMode(2, OUTPUT);
	Serial.begin(9600);

	xTaskCreate (
		taskReadPort,
		"ReadPortTask",
		128,
		NULL,
		2,
		NULL
	);

	Serial.println("Finished Setup");
}

void loop()
{
	// Empty as FreeRTOS will handle tasks
}

void taskReadPort(void* pvParameters)
{
	byte buffer[100];
	int bufferPointer = 0;
	
	Serial.println("Start reading");

	while (1)
	{
		if (Serial.available())
		{
			byte readByte = Serial.read();

			if (readByte != (byte)'x')
			{
				Serial.println("new");

				buffer[bufferPointer] = readByte;
				bufferPointer++;
			}
			else
			{
				Serial.println("end");

				for (int i = 0; i < bufferPointer; i++)
				{
					Serial.print((char)buffer[i]);
				}

				Serial.println();
				bufferPointer = 0;
			}			
		}
	}
}