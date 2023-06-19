#include "main.h"
/**
 * _memset - fills a memory
 * @s: string
 * @b: byte used
 * @n: the number of bytes to fill
 * Return: memory area of s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n && s[i] != '\0')
		s[i++] = b;
	return (s);
}
