#include "main.h"
#include <stdio.h>

/**
 * swap_int  - Takes two pointers and swaps their values
 * @a: parameter 1
 * @b: parameter 2
 * Return: two ints
 */

void swap_int(int *a, int *b)
{
	int k;

	k = *a;
	*a = *b;
	*b = k;
}

