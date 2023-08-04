#include "main.h"

/**
 * clear_bit - sets bit value to 0
 * @n: pointer to unsigned long int to be cleared
 * @index:;the index of the bit to be cleared
 *
 * Return: 1 on success, 0 if error occurs
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n = (~(1UL << index) & *n);

	return (1);
}
