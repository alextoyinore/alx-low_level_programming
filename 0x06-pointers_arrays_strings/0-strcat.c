#include "main.h"

/**
 * *_strcat - concatenates two arrays
 * @dest: destination array parameter
 * @src: source array parameter
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;

	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while ((dest[i + j] = *src++) != '\0')
	{
		j++;
	}

	return (dest);
}

