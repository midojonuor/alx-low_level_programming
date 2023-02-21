#include "main.h"

/**
 * print_alphabet_x10 - function that prints the alphabet
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int i = 0;
	int j = 0;

	for (i = 0; i < 10; ++i)
	{
		for (j = 0; j < 26; ++j)
		{
			_putchar('a' + j);
		}
		_putchar('\n');
	}
}
