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

	if (needle[0] == '\0')
		return (haystack);
	while (*haystack != '\0')
	{
		if (*haystack == needle[0])
		{
			i = 0;
			while (needle[i] != '\0')
			{
				if (needle[i] != haystack[i])
					break;
				i++;
			}
			if (needle[i] == '\0')
				return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
