#include "simba.h"
#include "stdlib.h"
#include "stdio.h"

#include "Interpreter.h"
#include "HardwareInterface.h"

/*
 * Stores the assembly code (commands)
 * 
 * aAssembly    : Array of commands and arguments (integers)
 * aSize        : Amount of integers in array
 */
void setAssembly(int aAssembly[], int aSize)
{
    // Resize the array
    _assembly = (int*) realloc(_assembly, aSize * sizeof(int));

    /*
     * Copy over all values
     */
    for (int i = 0; i < aSize; i++)
    {
        _assembly[i] = aAssembly[i];
    }

    // Store size
    _asmSize = aSize;

    // Reset command pointer
    _asmPointer = 0;
}

/*
 * Executes all comands in assembly array
 */
void runAssembly()
{
    /*
     * Reset pointer if necessary
     */
    if (_asmPointer >= _asmSize)
    {
        _asmPointer = 0;
    }

    /*
     * Loop through all commands and execute them
     */
    while (_asmPointer < _asmSize)
    {
        runCommand(_assembly[_asmPointer]);
    }
}

/*
 * Executes a command
 * 
 * aCommand : Command to be executed (integer)
 */
void runCommand(int aCommand)
{
    switch (aCommand)
    {
    case WRITE_PIN:
        // Write the LED pin with the next integer in the
        // array as argument
        pin_write(&led, _assembly[++_asmPointer]);
        break;
    case WAIT:
        // Pauses the thread with the next integer in the
        // array as argument
        thrd_sleep_ms(_assembly[++_asmPointer]);
        break;
    
    default:
        break;
    }

    // Increase the command pointer
    _asmPointer++;
}