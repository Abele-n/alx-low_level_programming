#include "main.h"
#include <stdlib.h>

/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 *
 * Return: concat of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	char *naf;

	int i, f;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = f = 0;

	while (s1[i] != '\0')
		i++;
	while (s2[f] != '\0')
		f++;
	naf = malloc(sizeof(char) * (i + f + 1));

	if (naf == NULL)
		return (NULL);

	i = f = 0;

	while (s1[i] != '\0')
	{
		naf[i] = s1[i];

		i++;
	}
	while (s2[f] != '\0')
	{
		naf[i] = s2[f];

		i++, f++;
	}
	naf[i] = '\0';
	return (naf);
}
