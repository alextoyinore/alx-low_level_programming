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
	int i, j, m;

	i = 0;

	m = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[m] != '\0')
	{
		m++;
	}

	if (n > m)
	{
		n = m;
	}

	for (j < n; (dest[j] = *src++) != '\0'; j++)
	{
		if (src[j] == '\0')
		{
			j = n;
		}
	}

	return dest;
}

