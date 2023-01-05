#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - prints recursion and a new line
 * @s: pointer to the string to be printed
 * Return: nothing
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
	putchar(*s);
	_puts_recursion(s + 1);
}
