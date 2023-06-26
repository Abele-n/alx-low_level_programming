#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: string
 * return: 0
 */

void print_rev(char *s)

{
	int how_longi = 0;

	int o;

	while (*s != '\0')
	{
		how_longi++;
		s++;
	}
	s--;

	for (o = how_longi; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
