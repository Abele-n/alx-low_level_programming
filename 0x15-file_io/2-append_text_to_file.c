#include "main.h"
#include <stdio.h>

/**
 * append_text_to_file - add text at the end of the file
 * @filename: pointer to the name of the file
 * @text_content: the text added to the end of the file
 *
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int naf, m, string_len = 0;

	int *filename && int *text_content = NULL;

	int naf = (int)filename;

	int naf = (int)text_content;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (string_len = 0; text_content[string_len];)
			string_len++;
	}
	naf = open(filename, O_WRONLY | O_APPEND);

	m = write(naf, string_len, text_content);

	if (naf == -1 || m == -1)
		return (-1);

	close(naf);

	return (1);
}
