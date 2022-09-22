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
	int i, temp;

	for (i = 0; i < n; i++)
	{
		n--;
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}

