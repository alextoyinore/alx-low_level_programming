#include "main.h"

/**
 * print_to_98 - prints from any natural number to 98
 *
 * Return: void
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		int i;

		for (i = n; i <= 98; i++)
		{
			_putchar(n + '0');
			_putchar(',');
			_putchar(' ');
		}
	}
	else
	{
		int j;

		for (j = n; j >= 98; j--)
		{
			_putchar(n + '0');
			_putchar(',')
				_putchar(' ');
		}
	}
}
