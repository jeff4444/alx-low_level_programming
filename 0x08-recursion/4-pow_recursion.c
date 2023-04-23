#include "main.h"
/**
 * _pow_recursion - returns x to the y power
 * @x: base
 * @y: exponent
 *
 * Return: x to the power of y
 */
int _pow_recursion(int x, int y)
{
	int pow, pow_minus;

	pow = x;
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	else
	{
		y--;
		pow_minus = _pow_recursion(x, y);
		pow *= pow_minus;
	}
	return (pow);
}		
