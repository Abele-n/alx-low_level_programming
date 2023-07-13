#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 *
 * Return: pointer to the new array
 */

int *array_range(int min, int max)
{
	int *naf;

	int i, diff;
	/*difference for range max and min*/

	if (min > max)
		return (NULL);
	diff = max - min + 1;

	naf = malloc(sizeof(int) * diff);

	if (naf == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
		naf[i] = min++;
	return (naf);
}
