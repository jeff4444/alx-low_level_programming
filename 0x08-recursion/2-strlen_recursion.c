#include "main.h"
/**
 * _strlen_recursion - returns string length
 * @s: string input
 *
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	int i, l;

	i = 0;
	l = 0;
	if (*s)
	{
		i++;
		l = _strlen_recursion(s + 1);
		i += l;
	}

	return (i);
}
