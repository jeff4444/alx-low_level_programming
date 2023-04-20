#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints opcodes of its function
 * @argc: number of cmd line args
 * @argv: list of cmd line args
 *
 * Return:0 (Success)
 */
int main(int argc, char *argv[])
{
	int n;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	n = atoi(argv[1]);

	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}

	return (0);
}
