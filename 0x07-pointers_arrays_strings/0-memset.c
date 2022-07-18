#include "main.h"

/**
 *  _memset - fill a block of memory with a particular value
 *  @s: starting address of memory to get filled
 *  @b: the value to be filled
 *  Return: array
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; ++i)
	{
		s[i] = b;
	}
	return (s);
}
