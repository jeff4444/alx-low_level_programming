#include <stdio.h>
#include "main.h"
/**
 * main - multiply numbers from the command line
 * @argc: number of command line arguments
 * @argv: list of command line arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int mult, i;

	mult = 1;

	if (argc > 2)
	{
		for (i = 1; i < argc; i++)
		{
			mult *= atoi(argv[i]);
		}
		printf("%d\n", mult);
	}
	else
	{
		printf("Error\n");
	}
	
	return (0);
}	
