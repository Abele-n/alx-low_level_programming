#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: the character to print
 * return: 1 on success
 * on error -1 is set and errno set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
