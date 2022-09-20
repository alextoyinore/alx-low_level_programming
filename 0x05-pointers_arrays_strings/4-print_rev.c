#include "main.h"
#include <stdio.h>

/**
 * print_rev - Prints string in reverse
 * @s: parameter
 * Return: s in reverse
 */

void print_rev(char *s)
{
	int strLength;
	int a, b;

	strLength = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		strLength++;
	}

	b = 0;

	while (b != (strLength - 1))
	{
		_putchar(s[b]);
		b--;
	}
	_putchar('\n');
}

