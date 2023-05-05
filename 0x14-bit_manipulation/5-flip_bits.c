#include "main.h"
/**
 * flip_bits - returns number of bits needed to
 * flip to get from a number to the other
 * @n: first number
 * @m: second number
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int res = (n ^ m), test = 1;
	unsigned int out = 0;
	int i, j;

	for (i = 31; i >= 0; i--)
	{
		j = i;
		while (j--)
			test *= 2;
		if (res & test)
			out++;
		test = 1;
	}
	return (out);
}
