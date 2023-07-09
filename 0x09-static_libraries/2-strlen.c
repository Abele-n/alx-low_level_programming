#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 *
 * Return: length
 */

int _strlen(char *s)
{
	int how_longi = 0;

	while (*s != '\0')
	{
		how_longi++;

		s++;
	}
	return (how_longi);
}
