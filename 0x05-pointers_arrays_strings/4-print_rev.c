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

	for (a = 0; s[a] != '\0'; a++)
	{
		strLength++;
	}

	b = strLength - 1;

	while (b >= 0)
	{
		_putchar(s[b]);
		b--;
	}
	_putchar('\n');
}

