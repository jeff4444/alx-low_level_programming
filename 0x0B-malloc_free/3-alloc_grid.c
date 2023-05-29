#include "main.h"
/**
 * alloc_grid -  returns a pointer to a 2 dimensional array of integers
 * @width: width
 * @height: height
 * Return: grid created
 */
int **alloc_grid(int width, int height)
{
	int **a;

	if ((width <= 0) || (height <= 0))
		return (NULL);
	a = malloc(height * sizeof(int *));
	if (a == NULL)
		return (NULL);
	while (i < height)
	{
		a[i] = malloc(width * sizeof(int));
		if (a[i] == NULL)
			return (NULL);
		j = 0;
		while (j < width)
		{
			a[i][j] = 0;
			j++;
		}
		i++;
	}
	return (a);
}
