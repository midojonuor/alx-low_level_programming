#include <stdio.h>

/**
 * main - Entry point
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int iter = 0;

	for (iter = 0; iter < 90; ++iter)
	{
		putchar('0' + (iter / 10));
		putchar('0' + (iter % 10));
		if (iter < 89)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
