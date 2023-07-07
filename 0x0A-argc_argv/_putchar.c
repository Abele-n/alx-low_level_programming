#include "main.h"
#include <stdio.h>

/**
 * _putchar - writes character c to stdout
 * @c: character to print
 * Return: 1 on success
 * On error, -1 is returned, and errno is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
