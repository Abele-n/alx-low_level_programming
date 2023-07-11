#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 *
 * Return: NULL
 */

int **alloc_grid(int width, int height)
{
	int **naf;

	int a, b;

	if (width <= 0 || height <= 0)
		return (NULL);
	naf = malloc(sizeof(int *) * height);

	if (naf == NULL)
		return (NULL);
	for (a = 0; a < height; a++)
	{
		naf[a] = malloc(sizeof(int) * width);

		if (naf[a] == NULL)
		{
			for (; a >= 0; a--)
				free(naf[a]);
			free(naf);
			return (NULL);
		}
	}
	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
			naf[a][b] = 0;
	}
	return (naf);
}
