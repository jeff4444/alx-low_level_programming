#include <stdio.h>
#include "main.h"
/**
 * main - prints command line arguments
 * @argc: number of elements
 * @argv: list of command line elements
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char* argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
