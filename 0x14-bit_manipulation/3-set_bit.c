#include "main.h"
/**
 * set_bit - sets a value of a bit to 1
 * @n: number
 * @index: given index
 *
 * Return: 1 (sucess) 0 (Fail)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int text = 1;

	if (index > 63)
		return (-1);
	while (index--)
		text *= 2;
	*n = *n | text;
	return (1);
}
