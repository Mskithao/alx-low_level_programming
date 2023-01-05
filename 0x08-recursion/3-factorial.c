#include "main.h"

/**
 * factorial - factorial function
 * @n: interger
 *
 * return: 0 upon success
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return ((n * factorial(n - 1));
}

