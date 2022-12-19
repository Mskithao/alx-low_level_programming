#include <stdlib.h>
#include <stdio.h>

/**
 * main -program entry point
 *
 * Return: Always 0
 */

int main(void)
{
	char c = 'a';

	while (c >= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
