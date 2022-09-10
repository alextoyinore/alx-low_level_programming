#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int m;
	int n;

	m = 48;
	n = 48;

	while (m < 58)
	{
		while(n < 58)
		{
			if (m != n)
			{
				putchar(m);
				putchar(n);

				if (m != 57)
				{
					putchar(44);
					putchar(32);
				}
			}

			n = n + 1;
		}

		m = m + 1;
	}

	putchar(10);

	return (0);
}

