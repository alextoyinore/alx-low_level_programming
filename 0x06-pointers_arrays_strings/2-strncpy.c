#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination string
 * @src: source string
 * @n: length to copy
 *
 * Return: dest
 */


char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	i = 0;

	while (src[i] != '\0')
	{
		i++;
	}

	for (j < n; (dest[j] = *src++); j++)
	{
		if (n > i)
		{
			n = i;
		}

		if (src[j] == '\0')
		{
			j = n;
		}
	}

	return dest;
}

