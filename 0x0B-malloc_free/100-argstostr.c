#include "main.h"
#include <stdlib.h>

/**
 * argstostr - main entry
 * @ac: int input
 * @av: double pointer array
 *
 * Return: 0
 */

char *argstostr(int ac, char **av)
{
	int i, n, m = 0, p = 0;

	char *naf;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
			m++;
	}
	p += ac;

	naf = malloc(sizeof(char) * p + 1);

	if (naf == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
		{
			naf[m] = av[i][n];

			m++;
		}
		if (naf[m] == '\0')
		{
			naf[m++] = '\n';
		}
	}
	return (naf);
}
