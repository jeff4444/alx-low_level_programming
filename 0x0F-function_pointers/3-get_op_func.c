#include "3-calc.h"
/**
 * get_op_func - returns a pointer to a function that corresponds
 * given as a parameter
 * @s: operator
 *
 * Return: one function in 3-op_functions
 */
int (*get_op_func(char *s))(int a, int b)
{
	opt_ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	for (i = 0; i < 5; i++)
	{
		if (ops[i][0] == s)
			return (ops[i][1]);
	}
	return (NULL);
}
