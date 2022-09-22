#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: output string
 * @src: input string
 * @n: bytes to use from src
 *
 * Return: description
 */

char *_strncat(char *dest, *src, int n)
{
	int i, j, len;

	i = 0;

	while ( dest[i] != '\0')
	{
		i++;
	}

	for (j = 0; j < n; j++)
	{
		dest[i + j] = src[j];
		if (src[j] == '\0')
			j = n;
	}

	return (dest);
}

