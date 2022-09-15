#include "main.h"

/**
 * _islower - check is a character is lowercase or not
 * @c: value to be passed in
 *
 * Return: 1 if true and 0 if not
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
