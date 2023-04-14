#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array of chararcters and initializes it with a specific char
 * @size: size of array
 * @c: character to be used
 *
 * Return: NULL if size equals 0, else pointer to created array
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	int i, j;
		
	j = size/sizeof(int);

	if (j == 0)
	{
		return (NULL);
	}

	s = malloc(size + sizeof(char));

	for (i = 0; i < j; i++)
	{
		s[i] = c;
	}
	s[i] = '\0';

	return (s);
}
