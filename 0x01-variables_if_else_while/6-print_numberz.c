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

	n = 48;

	while (n < 58)
	{
		putchar(n);
		n = n + 1;
	}

	putchar(10);

	return (0);
}

