#include <stdio.h>
#include <stdlib.h>
/**
 * main - main
 * Return: 0
 */
int main(void)
{
	int ch = 97;

	for (;ch < 123; ch++)
		putchar(ch + '0');
	putchar('\n');
	return (0);
}
