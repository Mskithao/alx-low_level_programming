#include "main.h"

/**
 * _sqrt_recursion - function to call
 * @n: interger to square
 *
 * Return: value of the root
 */

int _sqrt_recursion(int n)
{
	int i;

	if (i * i == n)
	{
		return (i);
	}
	else if (i > n / 2)
	{
		return (-1);
	}
	else
	{
		return (_sqrt_recursion(n, i + 1));
	}
}

