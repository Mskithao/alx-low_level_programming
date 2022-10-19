#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10 times followed by a new line
 *
 * Return: always 0 upon success
 */

void print_alphabet_x10(void)
{
	char i;
	char h;

	for (h = 0; h <= 9; h++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
