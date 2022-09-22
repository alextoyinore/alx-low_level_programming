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
	int i, j, m;

	i = 0;

	j = 0;

	m = 0;

	while (src[m] != '\0')
	{
		m++;
	}

	while ( dest[i] != '\0')
	{
		i++;
	}

	if (n > m)
	{
		n = m;
	}


	while (j < n)
	{
		dest[i + j] = *src++;
		if (src[j] == '\0')
			j = n;
		j++;
	}

	return (dest);
}

