#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * print_numbers - prints a number
 * @separator: separator
 * @n: number of arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i;

	va_list args;
	va_start(args, n);

	for (i = 0; i < (int) n; i++)
	{
		printf("%d", va_arg(args, int));
		if (separator != NULL && i != ((int) n) - 1)
			printf("%s", separator);
	}
	printf("\n");
}
