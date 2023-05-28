#include "main.h"
/**
 * reverse_array - reverses an array
 * @a: the array
 * @n: number of elements
 */
void reverse_array(int *a, int n)
{
	int i = 0, j = n - 1, mid, temp;

	if ((n % 2) == 0)
		mid = n / 2;
	else
		mid = (n - 1) / 2;

	while (i < mid)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		i++;
		j--;
	}
}
