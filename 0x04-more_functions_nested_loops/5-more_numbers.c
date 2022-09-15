#include "main.h"

/**
 * more_numbers - prints 10 x numbers from 0 - 14
 *
 * Return: void
 */

int more_numbers(void)
{
	int i;
	i = 0;

	int j;

	while (i < 10)
	{
		j = 0;
		while (j < 15)
		{
			if(j >= 10)
			{
				_putchar((j / 10) + '0');
			}
			_putchar((i % 10) + '0');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
