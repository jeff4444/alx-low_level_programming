#include "main.h"
#include <stdio.h>
/**
 * main - used to get the name of the executable file
 * @argc: length of argv
 * @argv: array of command line arguments
 *
 * Return: 0 (Always)
 */
int main(int argc__attribute__((unused)), char* argv[])
{
	printf("%s\n", *argv);

	return (0);
}
