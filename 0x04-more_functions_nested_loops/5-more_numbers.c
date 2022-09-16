#include "main.h"

/**
 * more_numbers - prints 10 x numbers from 0 - 14
 *
 * Return: void
 */

int more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
			{
				putchar((j / 10) + '0');
			}
			putchar((j % 10) + '0');
		}
		putchar('\n');
	}
}
