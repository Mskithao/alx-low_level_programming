#include "main.h"

/**
 * factorial - factorial function
 * @n: interger
 *
 * Return: -1 if n is less than 0, 1 if n is 0, and 0 upon success
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}

