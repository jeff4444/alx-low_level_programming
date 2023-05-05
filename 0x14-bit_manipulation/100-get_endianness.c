#include "main.h"
/**
 * get_endianness - checks the endianness
 * Return: 0 (big endian) 1 (little endian)
 */
int get_endianness(void)
{
	unsigned int i = 1;

	char *c = (char *)&n;

	if (*c)
		return (0);
	return (1);
}
