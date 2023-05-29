#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: string one
 * @s2: string two
 *
 * Return: Concatenated string or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int len, i, j;
	char *s;

	len = 0;
	i = 0;
	while (s1[len] != '\0')
		len++;
	while (s2[i] != '\0')
		i++;
	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}
	else if (s1 == NULL)
	{
		s = malloc(i + 1);
		i = 0;
		while (s2[i] != '\0')
		{
			s[i] = s2[i];
			i++;
		}
		s[i] = s2[i];
		return (s);
	}
	else if (s2 == NULL)
	{
		s = malloc(len + 1);
		i = 0;
		while (s1[i] != '\0')
		{
			s[i] = s1[i];
			i++;
		}
		s[i] = s1[i];
		return (s);
	}
	s = malloc(sizeof(char) * (len + i + 1));
	if (s == NULL)
	{
		fprintf(stderr, "Not enough memory left!\n");
		return (NULL);
	}
	for (j = 0; j < len; j++)
		s[j] = s1[j];
	for (j = 0; j < i; j++)
		s[len + j] = s2[j];
	s[len + j] = '\0';

	return (s);
}
