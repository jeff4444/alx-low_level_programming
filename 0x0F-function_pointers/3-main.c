#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - final main
 * @argc: number of CL arguments
 * @argv: list of CL arguments
 *
 * Return: 0 (Success)
 *
 */
int main(int argc, char *argv[])
{
	int a, b, res;

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (b == 0 && (argv[2][0] == '/' || argv[2][0] == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	res = (get_op_func(argv[2]))(a, b);
	if (res == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", res);
	return (0);
}
