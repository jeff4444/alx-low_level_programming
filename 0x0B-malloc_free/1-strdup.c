#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - creates an allocated space in memory
 *  with a string copy
 *  @str: string used
 *
 *  Return: string copy
 */
char *_strdup(char *str)
{
	int len, i;
	char *s;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	s = malloc(sizeof(char) * (len + 1));
	if (s == NULL)
	{
		fprintf(stderr, "Not enough memory left!\n");
		return (NULL);
	}

	for (i = 0; i < (len + 1); i++)
	{
		s[i] = str[i];
	}

	return (s);
}
