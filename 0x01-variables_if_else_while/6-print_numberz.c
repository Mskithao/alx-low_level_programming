#include <stdio.h>
#include <stdlib.h>

/**
 * main - program entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int k = 0;

	while (k < 10)
	{
		putchar('0' + k);
		/**
		 * '0' + digit is a cheap way of converting
		 * a single digital interger into its character representation
		 */
		k++;
	}
	putchar('\n');
	return (0);
}
