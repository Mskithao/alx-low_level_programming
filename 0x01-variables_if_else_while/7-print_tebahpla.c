#include <stdio.h>
#include <stdlib.h>
/**
 * main - program entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}
