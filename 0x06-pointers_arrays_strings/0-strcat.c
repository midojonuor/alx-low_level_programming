#include "main.h"
#include "stdlib.h"

/**
 * _strcat - function that concatenates two strings
 * @dest: pointer to destnation
 * @src: pointer to source
 * Return: pointer to char
 */
char *_strcat(char *dest, char *src)
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
	
    while (src[src_size] != '\0')
    {
        src_size += 1;
    }

	concStr_size = dest_size + src_size;
    
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
