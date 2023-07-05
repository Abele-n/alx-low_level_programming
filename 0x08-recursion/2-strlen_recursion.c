#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string to be measured
 * return: the length of the string
 */

int _strlen_recursion(char *s)
{
	int how_longi = 0;

	if (*s)
	{
		how_longi++;
		how_longi += _strlen_recursion(s + 1);
	}
	return (how_longi);
}
