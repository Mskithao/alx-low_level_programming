#include <stdio.h>
#include <stdlib.h>

/**
 * main - program entry point
 * Return: Always return 0
 */

int main(void)
{
	char c = ('a');

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
