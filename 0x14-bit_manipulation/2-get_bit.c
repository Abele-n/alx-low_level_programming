#include "main.h"
#include <stdlib.h>

/**
 * get_bit - gets the value of a bit at a certain index
 * @n: the index, starting from 0 of the bit you want to get
 * @index: the position of the bit you want to get
 *
 * Return: the value of the index in bits
 * and, -1 incase of an error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int value_of_bit;

	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	value_of_bit = (n >> index) & 1;

	return (value_of_bit);
}
