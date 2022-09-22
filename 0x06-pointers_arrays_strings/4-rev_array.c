#include "main.h"

/**
 * reverse_array - reverses a given array
 * @a: array parameter
 * n: number of elements in the array
 *
 * Return: Always 0
 */

void reverse_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if ((n - i) == n)
			continue;

		_putchar(a[n-i]);
	}

	return (0);
}
