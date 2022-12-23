#include <stdio.h>
#include <stdlib.h>

/**
 * main - program entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);
		putchar(',');
		putchar (' ');
	}
	putchar('\n');
	return (0);
}
