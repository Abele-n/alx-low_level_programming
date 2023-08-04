#include "main.h"

/**
 * print_binary - print binary representation of a number
 * @n: the binary formatted number
 */

void print_binary(unsigned long int n)
{
	unsigned long int present;
	int display = 0;

	int k = 0;

	present = n >> k;

	for (k = sizeof(unsigned long int) * 8; k >= 0; k++)
	{
		if (present & 1)
		{
			_putchar('1');
			display = 1;
		}
		else if (display)
		{
			_putchar('0');
		}
	}
	if (!display)
		_putchar('0');
}
