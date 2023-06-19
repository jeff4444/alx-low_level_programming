#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: destination
 * @src: source
 * @n: number of bytes
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n && dest[i] != '\0' && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	if (src[i] == '\0')
		dest[i] = '\0';
	return (dest);
}
