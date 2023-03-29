#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string input
 */
void rev_string(char *s)
{
	int len;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	int i, j;

	j = len / 2;

	for (i = 0; i < j; i++)
	{
		int temp;

		temp = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = temp;
	}
}
