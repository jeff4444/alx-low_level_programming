#include "main.h"
#include <stdio.h>
/**
 * get_bit - returns the value of a bit at an idx
 * @n: number to use
 * @index: index
 *
 * Return: bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int value = 1;

	if (index > 63)
		return (-1);
	while (index--)
	{
		value *= 2;
	}

	if (n & value)
		return (1);
	return (0);
}
