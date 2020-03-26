#include "Interpreter.h"

Interpreter::Interpreter() {}
Interpreter::~Interpreter() {}

Interpreter::Interpreter(int aAssembly[], int aSize)
{
	setAssembly(aAssembly, aSize);
}
/*
 * Stores the assembly code (commands)
 * 
 * aAssembly	: Array of commands and arguments (integers)
 * aSize		: Amount of integers in array
 */
void Interpreter::setAssembly(int aAssembly[], int aSize)
{
	// Resize the array
	this->_assembly = (int*) realloc(this->_assembly, aSize * sizeof(int));

	/*
	 * Copy over all values
	 */
	for (int i = 0; i < aSize; i++)
	{
		this->_assembly[i] = aAssembly[i];
	}

	// Store size
	this->_asmSize = aSize;

	// Reset command pointer
	this->_asmPointer = 0;
}

/*
 * Executes all comands in assembly array
 */
void Interpreter::runAssembly()
{
	if (_asmSize <= 0)
	{
		return;
	}

	//Reset pointer if necessary
	this->_asmPointer = 0;

	/*
	 * Loop through all commands and execute them
	 */
	while (this->_asmPointer < this->_asmSize)
	{
		runCommand(this->_assembly[this->_asmPointer]);
	}
}

/*
 * Executes a command
 * 
 * aCommand : Command to be executed (integer)
 */
void Interpreter::runCommand(int aCommand)
{
	switch (aCommand)
	{
	case WRITE_PIN:
		// Write the LED pin with the next integer in the
		// array as argument
		digitalWrite(2, _assembly[++_asmPointer]);
		break;
	case WAIT:
		// Pauses the thread with the next integer in the
		// array as argument
		vTaskDelay(pdMS_TO_TICKS(_assembly[++_asmPointer]));
		break;
		
	default:
		break;
	}

	if (_asmPointer >= _asmSize)
	{
		// Reset the command pointer
		_asmPointer = 0;
	}
	else
	{
		// Increase the command pointer
		_asmPointer++;
	}
}