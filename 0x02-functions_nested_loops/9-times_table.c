#include "main.h"

/**
 * times_table - Prints the times table from 0 to 9
 *
 * Return: void and prints times table
 */

void times_table(void)
{
	int i, j, result;

	i = 0;

	while (i <= 9)
	{

		j = 0;

		while (j <= 9)
		{
			result = i * j;

			if ((result / 10) > 0)
			{
				_putchar((result / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}

			_putchar((result % 10) + '0');

			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			j++;
		}

		_putchar('\n');
		i++;
	}
}