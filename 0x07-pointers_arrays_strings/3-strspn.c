#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: initial string
 * @accept: prefix
 * Return: number of bytes in s which contains only bytes
 * in accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	int j, in;

	while (*s != '\0')
	{
		in = 0;
		j = 0;
		while (accept[j] != '\0')
		{
			if (*s == accept[j])
				in = 1;
			j++;
		}
		if (!in)
			break;
		i++;
		s++;
	}
	return (i);
}
