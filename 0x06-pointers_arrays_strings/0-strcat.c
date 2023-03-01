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
    
    concStr = (char *) malloc(sizeof(char) * (dest_size + src_size - 1));

    for (index = 0; index < (dest_size - 1); ++index)
    {
        concStr[index] = dest[index];
    }
    
    for (index = 0; index < (src_size - 1); ++index)
    {
        concStr[index] = src[index];
    }

    return (concStr);
}
