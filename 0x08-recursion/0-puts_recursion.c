#include "main.h"
/**
 * _puts_recursion - prints a string
 * @s: string input
 *
 */
void _puts_recursion(char *s)
{
	_putchar(*s);
	_put_recursion(*(s+1));
}
