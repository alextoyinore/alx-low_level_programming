#include "main.h"

/**
 * jack_bauer - prints the time of the day for jack bauer in 24
 *
 * Return: void
 */

void jack_bauer(void)
{
	int h, m;

	h = 24;

	while (h > 0) 
	{
		m = 60;

		while (m > 0)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');

			m--;
		}

		h--;
	}
}
