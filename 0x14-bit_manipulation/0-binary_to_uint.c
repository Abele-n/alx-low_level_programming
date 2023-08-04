#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - converts a string binary number into unsigned integer
 * @b: pointer to string 0 and char 1
 *
 * Return: the unsigned integer
 * 0 is returned when 1 or more chars in the string b isn't 0 or 1
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int converted_value = 0;

	int counter;

	if (b == NULL)
		return (0);
	for (counter = 0; b[counter] != '\0'; counter++)
	{
		if (b[counter] < '0' || b[counter] > '1')
			return (0);
		converted_value = 2 * converted_value + (b[counter] - '0');
	}
	return (converted_value);
}
