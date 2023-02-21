#include "main.h"

/**
 * _islower - function that prints the alphabet
 * Description: 'the program's description'
 * Return: 1 (lowercase) 0 (otherwise)
 */
int _islower(int c)
{
	int retVal = 0;

	if ((c >= 'a') && (c <= 'z'))
	{
		retVal = 1;
	}
	else
	{
		retVal = 0;
	}

	return (retVal);
}
