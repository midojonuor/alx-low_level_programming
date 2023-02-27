#include "main.h"

/**
 * _puts - function that prints a string, followed by a new line
 * @str: pointer to char
 *
 * Return: void
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str += 1;
	}
	
	_putchar('\n');
}
