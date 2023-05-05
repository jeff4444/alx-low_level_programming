#include "main.h"
/**
 * get_endianness - checks the endianness
 * Return: 0 (big endian) 1 (little endian)
 */
int get_endianness(void)
{
	unsigned int i = 1;

	char *c = (char *)&i;

	if (*c)
		return (1);
	return (0);
}
