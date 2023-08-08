#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile - reads filenames and number of letters as parameters
 * @filename: the file to read
 * @letters: number of letters to be read
 *
 * Return: number of letters read
 * when filename is NULL, and if function fails 0 is returned
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t write_bytes;
	ssize_t read_bytes;
	ssize_t file_pointer;
	char *buff;

	file_pointer = open(filename, O_RDONLY);

	if (file_pointer == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	read_bytes = read(file_pointer, buff, letters);
	write_bytes = write(STDOUT_FILENO, buff, read_bytes); 

	free(buff);
	close(file_pointer);
	return (write_bytes);
}
