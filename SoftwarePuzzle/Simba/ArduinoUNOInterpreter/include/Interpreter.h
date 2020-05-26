#ifndef Interpreter
#define Interpreter

#define WRITE_PIN   1
#define WAIT        2

/*
 * Variables
 */
// Array of commands and arguments (integers)
int*    _assembly;
// Amount of commands and arguments
int     _asmSize;

// Pointer to current command or argument
int     _asmPointer;

/*
 * Functions
 */
void    setAssembly(int aAssembly[], int aSize);
void    runAssembly();
void    runCommand(int aCommand);

#endif