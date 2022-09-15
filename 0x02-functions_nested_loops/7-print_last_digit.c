#include "main.h"

/**
 * print_last_digit - returns the value of the last digit in a number
 * @n: the number passed in
 *
 * Return: integer
 */

int print_last_digit(int n)
{
	if (n < 0)
	{
		n = -1 * n;
	}

	_putchar((n % 10) + '0');

	return (n % 10);
}
