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
		k++;
	}
	putchar('\n');
	return (0);
}
