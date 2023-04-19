#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: name
 * @f(char *): function to print name
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
