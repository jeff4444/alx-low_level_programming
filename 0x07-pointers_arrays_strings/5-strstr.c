#include "main.h"
/**
 * _strstr - finds a substring
 * @haystack: string are looking through
 * @needle: what we are looking for
 * Return: begginning of located substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	while (*s != '\0')
	{
		if (*s == needle[0])
		{
			i = 0;
			while (needle[i] != '\0')
			{
				if (needle[i] != s[i])
					break;
				i++;
			}
			if (needle[i] == '\0')
				return (s);
		}
		s++;
	}
	return (NULL);
}
