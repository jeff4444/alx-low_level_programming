#include "main.h"
/*
 * _strncat - Concatenates two strings using tmost n bytes from src
 * @dest: First string
 * @src: Second string
 * Return: edited dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	for (j = 0; (j < n && src[j] != '\0'); j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
