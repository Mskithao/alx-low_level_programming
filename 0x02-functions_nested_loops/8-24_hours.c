#include "main.h"

/**
 * jack_bauer - check main
 * Descriptio: function to print every minute in the day
 * Return: nothing
 */

void jack_bauer(void)
{
	int H, M;

	for (H = 0, H < 24; H++)
	{
		for (M = 0; m < 60; M++)
		{
		_putchar((H / 10) + '0');
		_putchar((H % 10) + '0');
		_putchar(':');
		_putchar((M / 10) + '0');
		_putchar((M % 10) + '0');
		_putchar('\n');
		}
	}
}