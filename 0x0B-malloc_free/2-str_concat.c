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
	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}

	while (s1[len] != '\0')
	{
		len++;
	}
	while (s2[i] != '\0')
	{
		i++;
	}
	s = malloc(sizeof(char) * (len + i + 1));
	if (s == NULL)
	{
		fprintf(stderr, "Not enough memory left!\n");
		return (NULL);
	}
	for (j = 0; j < len; j++)
	{
		s[j] = s1[j];
	}
	for (j = 0; j < i; j++)
	{
		s[len + j] = s2[j];
	}
	s[len + j] = '\0';

	return (s);
}
