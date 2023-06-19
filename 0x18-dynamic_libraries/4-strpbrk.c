#include "main.h"
/**
 * _strpbrk - searchesa string for any set of bytes
 * @s: string to search
 * @accept: string containing letters to look for
 * Return: first occurence of a letter in accept
 */
char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (*s == accept[j])
				return (s);
			j++;
		}
		s++;
	}
	return (NULL);
}
