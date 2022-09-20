#include "main.h"
#include <stdio.h>

/**
 * puts2 - Prints a pointer passed to it
 * @str: parameter
 * Return: str
 */

void puts2(char *str)
{
	int i;
	i = 0;

	while (str[i] != '\0')
	{
		if ((i % 2) == 0)
		{
			_putchar(str[i]);
		}
		else
		{
			continue;
		}
	}
	_putchar('\n');
}

