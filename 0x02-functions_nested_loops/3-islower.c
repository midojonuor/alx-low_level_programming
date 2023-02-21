#include "main.h"

/**
 * _islower - Checks if a character is lowercase.
 * @c: The character to be checked.
 *
 * Return: 1 if character is lowercase, 0 otherwise.
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
