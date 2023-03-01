#include "main.h"
#include "stdlib.h"

/**
 * _strncat - function that concatenates two strings
 * @dest: pointer to destnation
 * @src: pointer to source
 * @n: number of bytes to concatenat from source
 * Return: pointer to char
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_size = 0;
	int src_size = 0;
	int concStr_size = 0;
	int index = 0;
	char *concStr = NULL;

	while (dest[dest_size] != '\0')
	{
		dest_size += 1;
	}

	concStr_size = dest_size + n;
	concStr = (char *) malloc(sizeof(char) * concStr_size);

	for (index = 0; index < dest_size; ++index)
	{
		concStr[index] = dest[index];
	}

	for (index = dest_size; index < concStr_size; ++index)
	{
		concStr[index] = src[index - dest_size];
	}

	concStr[concStr_size - 1] = '\0';

	return (concStr);
}
