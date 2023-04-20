#include "main.h"
/**
 * _print_rev_recursion - prints a string in reverse
 * @s: string input
 */
void _print_rev_recursion(char *s)
{
	int len;

	len = 0;
	while (*s != '\0')
		len++;

	if (len > 0)
	{
		_putchar(s[len - 1]);
		len--;
		_print_rev_recursion(*(s+len))
