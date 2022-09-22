#include "main.h"

/**
 * _strcat - concatenates two arrays
 * @dest: destination array parameter
 * @src: source array parameter
 *
 * Return: destination araary
 */

char *_strcat(char *dest, char *src)
{
	int i, j, k, srclen, destlen;

	i = 0;

	j = 0;

	k = 1;

	srclen = 0;

	destlen = 0;

	while (src[i] != '\0')
	{
		srclen++;
		i++;
	}

	while (dest[j] != '\0')
	{
		destlen++;
		j++;
	}

	while (k <= srclen)
	{
		dest[destlen + k] = src[k-1];
		k++;
	}

	return (dest);
}
