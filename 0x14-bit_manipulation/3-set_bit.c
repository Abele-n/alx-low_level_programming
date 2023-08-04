#include "main.h"

/**
 * set_bit - give value 1 to a bit at a given index
 * @n: pointer to the unsigned long integer
 * @index: position of the bit
 *
 * Return: 1 if works, -1 if error occurs
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n = (~(1UL << index) & *n);

	return (1);
}
