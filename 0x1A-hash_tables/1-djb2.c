#include "hash_tables.h"

/**
 * hash_djb2 - a function used to implement djb2 algorithm
 * @str: hash string
 * Return: the resulting hash
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int m;
	hash = 5381;
	
	while (m = *str++)
		/*hash * 33 + c*/
		hash = (hash << 5) + hash) + c;
	
	return (hash);
}
