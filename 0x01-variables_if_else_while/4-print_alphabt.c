#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	n = 97;

	while (n < 123)
	{
		if (n != 101 && n != 113)
		{
			putchar(n);
			n = n + 1;
		}
	}

	putchar(10);

	return (0);
}

