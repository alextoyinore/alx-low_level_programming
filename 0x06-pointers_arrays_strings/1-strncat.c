#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: output string
 * @src: input string
 * @n: bytes to use from src
 *
 * Return: description
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;

	j = 0;

	while ( dest[i] != '\0')
	{
		i++;
	}

	while (j < n)
	{
		dest[i + j] = *src++;
		if (src[j] == '\0')
			break;
		j++;
	}

	return (dest);
}

