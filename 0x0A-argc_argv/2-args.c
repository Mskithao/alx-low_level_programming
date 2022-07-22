#include <stdio.h>

/**
 * print all the arguemnts that it recieves
 * all arguemnts are printed
 * only one paramater per line
 * must end with a new line
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}


