#include "main.h"

/**
 * _strlen_recursion - string length
 *
 * @s: string
 * Return: 0 upon success
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
