#include "main.h"
#include <stdio.h>

/**
 * main - prints its name, followed by a new line.
 * @argc: number of arguments supplied to the program
 * @argv: array of pointers to the program
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
