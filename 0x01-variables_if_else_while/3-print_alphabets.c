#include <stdio.h>

/**
 * main - Entry point
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int iter = 0;

	for (iter = 0; iter < 26; ++iter)
	{
		putchar('a' + iter);
	}
	for (iter = 0; iter < 26; ++iter)
	{
		putchar('A' + iter);
	}
	putchar('\n');
	return (0);
}
