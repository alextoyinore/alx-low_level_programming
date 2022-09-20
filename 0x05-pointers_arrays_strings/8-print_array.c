#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints out an array given the length to print
 * @a: parameter 1
 * @n: parameter 2
 * Return: n
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
		printf("%d, ", a[i]);
		if (i == (n - 1))
			printf("%d", a[n - 1]);
	printf("\n");
}

