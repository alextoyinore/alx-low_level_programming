#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - copies string pointed to by a pointer
 * @dest: parameter 1
 * @src: parameter 2
 * Return: destination
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

