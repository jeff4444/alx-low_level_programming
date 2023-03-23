#include "main.h"
/**
 * _isdigit - Tests if input is a digit
 * @c: number input
 * Return: 1 is true and 0 if false
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
