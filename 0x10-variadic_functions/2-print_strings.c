#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_strings - prints strings
 * @separator: separator
 * @n: number of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	int i;
	char *s;

	va_list args;

	va_start(args, n);

	for (i = 0; i < (int) n; i++)
	{
		s = va_arg(args, char*);

		if (s == NULL)
			s = "(nil)";
		printf("%s", s);
		if (separator != NULL && i != (((int) n) - 1))
			printf("%s", separator);
	}
	va_end(args);

	printf("\n");
}
