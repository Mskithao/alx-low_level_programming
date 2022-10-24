#include "main.h"

/**
 * _isdigit - checks if integer is digit
 * @c: integer to check
 * Return: 1 if c is digit and 0 if otherwise
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
