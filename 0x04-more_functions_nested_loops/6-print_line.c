#include "main.h"

/**
 * print_line - prints a straight line
 * @n: argument passed
 *
 * Return: void
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (i < n)
		{
			_putchar('_');
			i++;
		}

		_putchar('\n');
	}
}
