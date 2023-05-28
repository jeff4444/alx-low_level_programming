#include <stdio.h>
#include <stdlib.h>
/**
 * main - main
 * Return: 0
 */
int main(void)
{
	char ch = 'z';

	for ( ; ch >= 'a'; ch--)
		putchar(ch);
	putchar('\n');
	return (0);
}
