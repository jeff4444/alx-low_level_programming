#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character to be looked for
 * Return: pointer to the first occurence of c
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return (NULL);
}
