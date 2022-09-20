#include "main.h"
#include <stdio.h>

/**
 * rev_string - Reverses a given string pointer
 * @s: parameter
 * Return: reversed s
 */

void rev_string(char *s)
{
	char reversed = s[0];
	int scount = 0;
	int i;

	while (s[scount] != '\0')
		scount++;

	for (i = 0; i < scount; i++)
	{
		scount--;
		reversed = s[i];
		s[i] = s[scount];
		s[scount] = reversed;
	}
}

