#include "main.h"
#include <stdlib.h>

/**
 * _atoi - converts a binary character to int
 * @s: character
 * Return: 1 or 0
 */
int _atoi(char s)
{
	if (s == '0')
		return (0);
	else
		return (1);
}

/**
 * binary_to_uint - converts a binary number to an unsigned
 * int
 * @b: binary number as a string
 * Return: converted unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	int len = 0, j, fact;
	unsigned int i = 0;

	if (b == NULL)
		return (0);

	while (b[len] != '\0')
		len++;

	fact = 1;
	for (j = (len - 1); j >= 0; j--)
	{
		if (b[j] != '0' && b[j] != '1')
			return (0);
		i += _atoi(b[j]) * fact;
		fact *= 2;
	}
	return (i);
}
