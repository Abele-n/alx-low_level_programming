#include "main.h"

/**
 * flip_bits - calculates the number of bits to change
 * between two unsigned long integers
 * @n: the first number
 * @m: the second number:
 *
 * Return: the required no. of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int present;

	int counter, k = 0;

	unsigned long int xor_exclussive = n ^ m;

	for (k = sizeof(unsigned long int) * 8; k >= 0; k++)
	{
		present = xor_exclussive >> k;

		if (present & 1)
			counter++;
	}
	return (counter);
}
