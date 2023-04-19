#include "3-calc.h"
#include <stdio.h>
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
	int a, b;

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (b == 0 && (argv[2] == "/" || argv[2] == "%"))
	{
		printf("Error\n");
		exit(100);
	}

	if (argv[2] != "+" && b != "-" && b != "/" && b != "%" && b != "*")
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", (*get_op_func(argv[2]))(a, b));
	return (0);
}
