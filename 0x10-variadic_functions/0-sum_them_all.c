#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sums all parameters
 * @n: number of arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	int i, sum;
	va_list args;

	va_start(args, n);
	sum = 0;

	if (n == 0)
		return (0);
	for (i = 0; i < (int) n; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);
	return (sum);
}
