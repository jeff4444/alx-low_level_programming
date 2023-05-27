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
	{
		if (ch != 101 && ch != 113)
			putchar(ch + '0');
	}
	putchar('\n');
	return (0);
}
