#include "main.h"
/**
 * main - used to get the name of the executable file
 * @argc: length of argv
 * @argv: array of command line arguments
 * Return: 0 (Always)
 */
int main(int argc, char* argv[])
{
	char* s = argv[0];
	
	int i = 0;

	while (s[i]!= '\0')
	{
		_putchar(s[i]);
		i++;
	}
	return 0;
}
