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
	int m;

	n = 97;
	m = 65;

	while (n < 123)
	{
		putchar(n);
		n = n + 1;
	}

	while (m < 91)
	{
		putchar(m);
		m = m + 1;
	}

	putchar(10);

	return (0);
}

