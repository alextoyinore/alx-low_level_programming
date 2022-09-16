#include "main.h"

/**
 * print_line - multiplies two digits
 * @n: argument passed
 *
 * Return: void
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 0; i < n; i++)
		{
			_putchar('_' + '0');
		}
	}

	_putchar('\n');
}
