#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string input
 */
void rev_string(char *s)
{
	int len, i, j, temp;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	j = len / 2;

	for (i = 0; i < j; i++)
	{
		temp = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = temp;
	}
}
