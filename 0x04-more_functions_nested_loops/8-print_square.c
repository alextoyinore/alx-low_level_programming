#include "main.h"

/**
 * print_square - prints # as sqiares
 * @size: parameter
 * Return: square of #s
 */

void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		i = 0;

		while (i < size)
		{
			_putchar('#');

			j = 0;

			while (j < size)
			{
				_putchar('#');
				j++;
			}

			_putchar('\n');
			i++;
		}
	}
}
