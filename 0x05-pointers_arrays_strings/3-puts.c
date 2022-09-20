#include "main.h"
#include <stdio.h>

/**
 * _puts - Prints string to stdout
 * @str: parameter
 * Return: string
 */

void _puts(char *str)
{
	int i; i = 0;
	char charAtPosition;
	charAtPosition = str[0];

	while (charAtPosition[i] != '\0')
	{
		_putchar(str[i]);
		charAtPosition = str[i++];
	}

	_putchar('\n');
}

