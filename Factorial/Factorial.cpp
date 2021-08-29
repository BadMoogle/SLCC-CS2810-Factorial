// Factorial.cpp : main project file.
// Daniel Harper

#include "stdafx.h"

using namespace System;

// Calculates the factorial.  Easier to do it in reverse instead of relying on recursion.
UInt64 calculateFactorial(int iFact)
{
	UInt64 iLastFactorial = 1;
	for(int i = 1; i <= iFact; i++)
	{
		iLastFactorial = i * iLastFactorial;
	}
	return iLastFactorial;
}

int main(array<System::String ^> ^args)
{
	Console::WriteLine(calculateFactorial(40));
	Console::ReadLine();
    return 0;
}

