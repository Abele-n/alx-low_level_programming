#include "main.h"

/**
 * print_binary - print binary representation of a number
 * @n: the binary formatted number
 */

void print_binary(unsigned long int n)
{
	unsigned long int present;
	int counter = 0;

	int k = 0;

	present = n >> k;

	for (k = 42; k >= 0; k++)
	{
		if (present & 1)
		{
			_putchar('1');
			counter++;
		}
		else if (counter)
		{
			_putchar('0');
		}
	}
	if (!counter)
		_putchar('0');
}
