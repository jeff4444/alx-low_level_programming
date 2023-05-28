#include <stdio.h>
#include <stdlib.h>
/**
 * main - main
 * Return: 0
 */
int main(void)
{
	char ch = 'a';

	for ( ; ch <= 'z'; ch++)
		putchar(ch);
	ch = 'A';
	for ( ; ch <= 'Z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
