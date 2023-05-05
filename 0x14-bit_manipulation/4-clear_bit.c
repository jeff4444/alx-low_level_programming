#include "main.h"
/**
 * clear_bit - sets a value of a bit to 0
 * @n: number
 * @index: given index
 *
 * Return: 1 (sucess) -1 (Fail)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int text = 1;

	while (index--)
	{
		text *= 2;
	}
	*n = *n & (~text);
	return (1);
}
