#include "main.h"

/**
 * _isdigit - check is a character is lowercase or not
 * @c: value to be passed in
 *
 * Return: 1 if true and 0 if not
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
