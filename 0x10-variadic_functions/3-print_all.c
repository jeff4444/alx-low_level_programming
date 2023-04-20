#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.>
/**
 * print_all - prints anything
 * @format: list of types of arguments
 */
void print_all(const char * const format, ...)
{
	int i;
	char *s;

	va_list args;

	va_start(args, format);

	i = 0;

	while (format[i] != '\0')
	{
		if (i != 0)
			printf(", ");
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, char));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, float));
				break;
			case 's':
				s = va_arg(args, char*);
				if (s == NULL)
					s = "(nil)";
				printf("%s", s);
				break;
			default:
				break;
		}
		i++;
	}
	va_end(args);

	printf("\n");
}

