#include "main.h"

/**
 * get_endianness - gets the systems indianness
 * Return: 0 if big endian, 1 for small
 */

int get_endianness(void)
{
	unsigned int h = 1;

	char *naf = (char *) &h;

	return (*naf);
}
