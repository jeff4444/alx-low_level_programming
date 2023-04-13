#include "main.h"
/**
 * main - used to get the name of the executable file
 * @argc: length of argv
 * @argv: array of command line arguments
 * Return: 0 (Always)
 */
int main(int argc, char* argv[])
{
	int i, j;

	while (argv[0][0] != '\0')
	{
		_putchar(*argv[0][0]);
	}
	return 0;
}
