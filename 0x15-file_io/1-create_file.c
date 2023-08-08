#include "main.h"
#include <stdio.h>

/**
 * create_file - creates and writes contents into a file
 * @filename: pointer to the filename
 * @text_content: string to write to a file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int file_pointer, m, string_len;

	if (filename == NULL)
		return (-1);
	if (text_content)
	{
		for (string_len = 0; text_content[string_len];)
			string_len++;
	}
	file_pointer = open(filename, O_RDWR, O_CREAT, O_TRUNC, 0600);
	m = write(file_pointer, text_content, string_len);

	if (file_pointer == -1 || m == -1)
		return (-1);
	close(file_pointer);
	return (1);
}
