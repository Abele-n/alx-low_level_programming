#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_buffer - allocates memory(1024bytes) to a buffer
 * @my_file: pointer to the name of the buffer file
 * Return: pointer to the new buffer
 */

char *create_buffer(char *my_file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Not possible to write to %s\n", my_file);
		exit(99);
	}
	return (buffer);
}

/**
 * close_file - close file descriptor
 * @file_desc: descriptor to be closed
 */

void close_file(int file_desc)
{
	int d;

	d = close(file_desc);

	if (d == -1)
	{
		dprintf(STDERR_FILENO, "Error: %d cannot be closed\n", file_desc);
		exit(100);
	}
}

/**
 * main - copy the content of a file to another
 * @argv: an array of pointer to arguments
 * @argc: the number of arguments supplied to the pointer
 *
 * Description: if the number of arguments is incorrect - exit code 97
 * If my_file_from does not exist or not possible to read - exit code 98
 * If my_file_to can neither be created nor wrtten to - exit code 99
 * if both my_file_to and my_file_from cannot be closed - exit code 100
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int to, from, k, w;

	char buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp my_file from my_file to\n");
		exit(97);
	}
	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	k = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || k == -1)
		{
			dprintf(STDERR_FILENO, "Error: Cannot read fro my_file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		w = write(to, buffer, k);

		if (to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Cannot write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		k = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);
	} while (k > 0);

	free(buffer);
	close_my_file(from);
	close_my_file(to);

	return (0);
}
