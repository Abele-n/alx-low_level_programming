#include "main.h"
#include <unistd.h>

/**
 * _putchar- writes character c to stdout
 * @c- character to print
 * return: 1 on success
 * on error -1, and errno set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
