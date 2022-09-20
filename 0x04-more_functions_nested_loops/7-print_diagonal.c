#include "main.h"

/**
 * print_diagonal - prints a diagonal of \
 * @n: the parameter for the height of the diagonal and width
 *
 * Return: a diagonal
 */

void print_diagonal(int n)
{
	int i;

	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		i = 0;

		while (i < n)
		{
			j = 0;

			while (j < i)
			{
				_putchar(' ');
				j++;
			}
			_putchar('\\');
			_putchar('\n');
			i++;
		}
	}
}
