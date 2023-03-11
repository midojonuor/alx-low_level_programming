#include "main.h"

/**
 * _isalpha - Checks if a character is lowercase.
 * @c: The character to be checked.
 *
 * Return: 1 if character is lowercase, 0 otherwise.
 */
int _isalpha(int c)
{
	int retVal = 0;

	if ((('a' <= c) && ('z' >= c)) || (('A' <= c) && ('Z' >= c)))
	{
		retVal = 1;
	}
	else
	{
		retVal = 0;
	}
	return (retVal);
}
