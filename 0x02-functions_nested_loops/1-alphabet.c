#include "main.h"

/**
 * print_alphabet - prints alphabet in lower case followed by a new line
 *
 * Return: always zero on success
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
