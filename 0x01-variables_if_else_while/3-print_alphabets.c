#include <stdio.h>
#include <stdlib.h>

/**
 * main - program entry point
 * Return: Always return 0
 */

int main(void)
{
	char CH = 'A';
	char ch = 'a';

	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	
	putchar('\n');
	return (0);
}
