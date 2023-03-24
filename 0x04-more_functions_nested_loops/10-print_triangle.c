#include "main.h"
/**
 * print_triangle - print a traingle
 * @size: size of triangle
 */
void print_triangle(int size)
{
	if (size > 0)
	{
		int i;

		for (i = 0; i < size; i++)
		{
			int j;

			for (j = (size - 1); j > i; j--)
			{
				_putchar(' ');
			}
		
			int k;

			for (k = 0; k < (i + 1); k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
