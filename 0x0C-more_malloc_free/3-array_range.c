#include "main.h"
/**
 * array_range - creates an array of ints
 * @min: minimum
 * @max: max
 * Return: created array
 */
int *array_range(int min, int max)
{
	int *a, i;

	if (min > max)
		return (NULL);
	a = malloc((max - min + 1) * sizeof(int));
	if (a == NULL)
		return (NULL);
	i = 0;
	while (min <= max)
	{
		a[i] = min;
		min++;
		i++;
	}
	return (a);
}
