#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - execute function given as parameter
 * on each elementof an array
 * @array: input integer array
 * @size: size of the arry
 * @action: pointer to the function
 *
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t j;

	if (!(array && action))
		return;

		for (j = 0; j < size; j++)
			action(array[j]);
}
