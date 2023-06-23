#include "main.h"
#include <string.h>

/**
 * print_most_numbers- print num except 2 and 4
 * return: void
 */
void trim(char *c);
void print_most_numbers(void)
{
	char c;
	
	for (c = '0'; c <= '9'; c++)
	{
		if (!(c == '2' || c == '4'))
			_putchar(c);
	}
	_putchar('\n');
}
void trim(char *c)
{
	int i = strlen(c) -1;
	while (i > 0)
	{
		if (s[i] == ' ' || s[i] == '\n' || s[i] == '\t') i--;
		else break;
	}
	s[i + 1] = '\0';
}
