#include "search_algos.h"
#include <math.h>

/**
 * jump_search - checks for a value in an array of
 * integers using Jump search algorithm
 *
 * @array: input array
 * @size: the array size
 * @value: the value to search in
 * Return: index of the number
 */

int jump_search(int *array, size_t size, int value)
{
	int index, m, l, prev;

	if (array == NULL || size == 0)
		return (-1);
	m = (int)sqrt((double)size);
	l = 0;
	prev = index = 0;
	do {
		printf("Value checked array[%d] = [%d]\n", index, array[index]);
		if (array[index] == value)
			return (index);
		l++;
		prev = index;
		index = l * m;
	} while (index < (int)size && array[index] < value);
	printf("Value found between indexes [%d] and [%d]\n", prev, index);
	for (; prev <= index && prev < (int)size; prev++)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
	}
	return (-1);
}
