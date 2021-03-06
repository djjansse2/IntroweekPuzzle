#ifndef Interpreter_h
#define Interpreter_h

#include "Arduino.h"

#include "Arduino_FreeRTOS.h"
#include "task.h"

#define WRITE_PIN	1
#define WAIT		2

class Interpreter
{
public:
			Interpreter(int[], int);
			Interpreter();

protected:
			~Interpreter();

public:
	void	setAssembly(int[], int);
	void	runAssembly();

private:
	void	taskRunAssembly();

private:
	void	runCommand(int);

private:
	int*	_assembly;
	int		_asmSize;
	int		_asmPointer;

    bool    _isRunning;
};

#endif