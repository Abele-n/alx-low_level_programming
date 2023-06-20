#include "main.h"

/**
 * _islower-checks if char is lowercase
 * @c: character to be checked
 * return: 1 if character is lowercase, otherwise 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
