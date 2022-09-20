#include "main.h"
#include <stdio.h>

/**
 * _puts - Prints string to stdout
 * @str: parameter
 * Return: string
 */

void _puts(char *str)
{
	int i; 
	i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}

