#include "main.h"

/**
 * main - Entry point
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int i = 0;

	for (i = 0; i < 26; ++i)
	{
		_putchar('a' + i);
	}
	_putchar('\n');
}
