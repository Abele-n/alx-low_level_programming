#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints name using function pointer
 * @name: string added
 * @f: pointer to function
 *
 * Return: NULL
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
