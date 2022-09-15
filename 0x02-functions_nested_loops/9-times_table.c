#include "main.h"

/**
 * times_table - Prints the times table from 0 to 9
 *
 * Return: void and prints times table
 */

void times_table(void)
{
	int i, j;

	i = 0;

	while (i < 13)
	{
		j = 0;

		while (j < 10)
		{
			_putchar((i * j) + '0');
			if (j < 10)
				_putchar(32);
			j++;
		}

		_putchar('\n');
		i++;
	}
}
