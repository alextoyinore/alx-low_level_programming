#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies string pointed to by a pointer
 * @dest: parameter 1
 * @src: parameter 2
 * Return: destination
 */

char _strcpy(char *dest, char *src)
{
	int i;

	int j;

	int len;

	len = 0;

	for (i = 0; src[i] != '\0'; i++)
	{
		len++;
	}

	for (j = 0; j < len; j++)
	{
		if(j == (len - 1))
		{
			dest[j] = '\0';
		}
		else
		{
			dest[j] = src[j];
		}
	}
	return (dest);
}

