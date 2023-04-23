#include "main.h"
/**
 * factorial - calculates factorial
 * @n: integer
 * 
 * Return: n factorial
 */
int factorial(int n)
{
	int fact, fact_minus;

	fact = 1;
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	if (n > 0)
	{
		fact *= n;
		fact_minus = factorial(n - 1);
		fact *= fact_minus;
	}
	return (fact);
}
