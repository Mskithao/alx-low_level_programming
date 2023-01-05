#include "main.h"

/**
 * _pow_recursion - function to call
 * @x: base integer
 * @y: power interger
 *
 * Return: 0 on success
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	return (x * _pow_recursion(x, y - 1));
}
