#include "main.h"

/**
 * create_file - creates and writes contents into a file
 * @filename: pointer to the filename
 * @text_content: string to write to a file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int file_pointer, string_len, m;

	if (filename == NULL)
		return (-1);
	file_pointer = fopen(filename, O_RDWR, O_CREATE, O_TRUNC, 0600);
	write_bytes = write(file_pointer, text_content, str_len);

	if (text_content)
	{
		for (string_len = 0; text_content[string_len]; string_len++);
	}
	if (file_pointer == -1 || m == -1)
		return (-1);
	fclose(file_pointer);
	return (1);
}
