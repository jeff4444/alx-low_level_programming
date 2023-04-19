#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - executes a function given as a parameter
 * on eahc element of an array
 * @array: array input
 * @size: size of the array
 * @action: function
 *
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int len, i;

	if (array == NULL)
	{
		array = malloc(size);
	}

	len = size / sizeof(int);

	for (i = 0; i < len; i++)
	{
		action(array[i]);
	}
}
