#include "search_algos.h"

/**
 * linear_search - checks for a value in an array of
 * integers using the Linear search algorithm
 *
 * @array: the input array
 * @size: the array size
 * @value: the value to search
 * Return: Always EXIT_SUCCESS
 */
int linear_search(int *array, size_t size, int value)
{
	int z;

	if (array == NULL)
		return (-1);
	for (z = 0; z < (int)size; z++)
	{
		printf("Value checked array[%u] = [%d]\n", z, array[z]);
		if (value == array[z])
			return (z);
	}
	return (-1);
}
