#include <stdio.h>
#include <stdlib.h>
/**
 * main - main
 * Return: 0
 */
int main(void)
{
	int ch = 122;

	for (;ch < 96; ch--)
		putchar(ch + '0');
	putchar('\n');
	return (0);
}
