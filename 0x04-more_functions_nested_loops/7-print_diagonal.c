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

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (i < n)
		{
			int j;

			while (j < n)
			{
				_putchar(' ');
				j++;
			}
			_putchar('\\');

			if (i == n -1)
				continue;

			_putchar('\n');
			i++;
		}
	}
}
