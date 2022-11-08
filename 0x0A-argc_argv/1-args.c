#include "main.h"
#include <stdio.h>

/**
 * main - Prints the number of arguments passed to it
 * @argc: The number of arguments supplied to the program
 * @argv: An array of pointers to the arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	if (argc == 1)
		printf("%d\n", argc - 1);
	else
	{
		for (i = 0; *argv; i++, argv++);
		printf("%d\n", i - 1);
	}
	return (0);
}
