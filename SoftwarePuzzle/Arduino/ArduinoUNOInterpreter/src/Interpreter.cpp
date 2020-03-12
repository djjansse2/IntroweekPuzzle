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
	if (!this->_isRunning)
	{
		
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
		delay(_assembly[++_asmPointer]);
		break;
		
	default:
		break;
	}

	// Increase the command pointer
	_asmPointer++;
}

void Interpreter::taskRunAssembly()
{
	// Reset pointer if necessary
	this->_asmPointer   = 0;
	// Set is running flag
	this->_isRunning	= true;

	/*
	* Loop through all commands and execute them
	*/
	while (this->_isRunning && this->_asmPointer < this->_asmSize)
	{
		runCommand(this->_assembly[this->_asmPointer]);
	}

	this->_isRunning = false;
}