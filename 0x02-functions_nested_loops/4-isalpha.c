#include "main.h"

/**
 * _isalpha - check is a character is lowercase or not
 * @c: value to be passed in
 *
 * Return: 1 if true and 0 if not
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
