#include "main.h"

/**
 * cap_string - capitalizes first letters of all words of a string
 * @n: parameter
 * Return: caps on first letter of a separator
 */
char *cap_string(char *n)
{
	int i, x;

	int capital = 32;

	int separators[] = {',', ';', '.', '?', '"', '(', ')', '{', '}', ' ', '\n', '\t'};

	for (i = 0; n[i] != '\0'; i++)
	{
		if (n[i] >= 'a' && n[i] <= 'z')
		{
			n[i] = n[i] - capital;
		}

		capital = 0;

		for (x = 0; x <= 12; x++)
		{
			if (n[i] == separators[x])
			{
				x = 12;
				capital = 32;
			}
		}
	}

	return (n);
}

