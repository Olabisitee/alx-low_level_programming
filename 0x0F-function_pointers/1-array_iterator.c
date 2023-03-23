#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - prints each array element on a new line
 * @size: how many element to print
 * @array: array
 * @action: pointer to print in regular or hex
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
	return;

	fir (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
