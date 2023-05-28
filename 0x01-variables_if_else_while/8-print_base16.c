#include <stdio.h>
#include <stdlib.h>
/**
 * main - main
 * Return: 0
 */
int main(void)
{
	char ch = '0';

	for ( ; ch <= '9'; ch++)
		putchar(ch);
	for (ch = 'a'; ch <= 'f'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
