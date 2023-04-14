#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - concatenates two string
 * @s1: string one
 * @s2: string two
 * @n: first bytes of s2 to be used
 *
 * Return: concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int len1, i;
	char *s;

	len1 = 0;
	i = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	
	while (s1[len1] != '\0')
	{
		len1++;
	}

	s = malloc(n + (sizeof(char) * len1) + 1);

	if (s == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
	{
		s[i] = s1[i];
	}
	for (i = 0; i < (int)n; i++)
	{
		s[len1 + i] = s2[i];
	}
	s[len + i] = '\0';

	return (s);
}
