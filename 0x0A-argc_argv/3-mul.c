#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success
 */

int main(int argc, char  *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
}

