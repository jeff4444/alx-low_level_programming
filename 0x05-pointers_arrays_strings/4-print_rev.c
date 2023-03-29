#include "main.h"
/**
 * print_rev - print a string in reverse
 * @s: string input
 */
void print_rev(char *s)
{
	int len;

	len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	s--;
	
	int i;

	for (i = len; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
