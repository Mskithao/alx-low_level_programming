#include "main.h"

/**
 * print_line - function that prints line
 * @n: number of times to print line
 * Return: void
 */
void print_line(int n)
{
	int i;
	
	for (i = 0; i < n; i++)
	{
		putchar('_');
	}
	putchar ('\n');
}
