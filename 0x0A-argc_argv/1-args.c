#include <stdio.h>
#include "main.h"
/**
 * main- prints the number of arguments passed in
 * @argc: Number of arguments
 * @argv: list of command line arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
