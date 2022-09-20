#include "main.h"
#include <stdio.h>

/**
 * _strlen - Takes a string pointer and returns the length of the string
 * @s: parameter
 * Return: length
 */

int _strlen(char *s)
{
	int i;
	int length;
	charAtPosition = s[0];

	i = 1; length = 0;

	while (charAtPosition != '\0')
	{
		length++;
		charAtPosition = s[i++];
	}

	return length;
}

