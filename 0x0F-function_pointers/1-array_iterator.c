#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_interator - excutes a function given as a parameter
 * on each element of an array
 * @array: array to interate over
 * @size: size of the array
 * @action: pointer to function used
 */

void array_interator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
