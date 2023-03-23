#include "main.h"
/**
 * print_last_digit - print the last digit of a number
 * @n: input value
 * Return: the last digit of the integer
 */
int print_last_digit(int n)
{
	int a;

	a = (n%10);

	_putchar(a+'0');
	return (a);
}
