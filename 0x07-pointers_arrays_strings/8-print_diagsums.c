#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - sum of two diagonals of a square matirx
 * @a: matrix
 * @size: size
 */
void print_diagsums(int *a, int size)
{
	int size1 = 0, size2 = 0, i;

	for (i = 0; i < size; i++)
	{
		size1 += a[i][i];
		size2 += a[i][size - i - 1];
	}
	printf("%d, %d\n", size1, size2);
}
