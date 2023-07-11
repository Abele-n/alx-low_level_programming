#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicate to new memory space location
 * @str: char
 *
 * Return: NULL
 */

char *_strdup(char *str)
{
	char *naf;

	int i, n = 0;

	if (str == NULL)
		return (NULL);
	i = 0;

	while (str[i] != '\0')
		i++;
	naf = malloc(sizeof(char) * (i + 1));

	if (naf == NULL)
		return (NULL);
	for (n = 0; str[n]; n++)
		naf[n] = str[n];
	return (naf);
}
