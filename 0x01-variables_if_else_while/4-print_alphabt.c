#include <stdio.h>
#include <stdlib.h>

/**
 * main - program entry point
 *
 * Return: Always 0
 */

int main(void)
{
	char k = 'a';

	while (k <= 'z')
	{
		if (k != 'q' && k != 'e')
		{
			putchar(k);
		}
		k++;
	}
	putchar('\n');
	return (0);
}
