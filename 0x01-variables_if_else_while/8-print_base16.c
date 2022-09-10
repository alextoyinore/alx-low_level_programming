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

	n = 0;
	m = 97;

	while (n < 58)
	{
		putchar(n);
		n = n + 1;
	}

	while (m < 105)
	{
		putchar(m);
		m = m + 1;
	}

	putchar(10);

	return (0);
}

