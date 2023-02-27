#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @s: pointer to char
 *
 * Return: int string length
 */
int _strlen(char *s)
{
	int len = 0;
	while(s[len] != '\0')
	{
		len += 1;
	}

	return len;
}
