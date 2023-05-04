#include "main.h"
#include <stdio.h>
/**
 * print_binary - prints a number in binary
 * @n: long int
 */
void print_binary(unsigned long int n)
{
	unsigned long int test = 1;
	int j, i, on;

	on = 0;
	for (i = 31; i >= 0; i--)
	{
		j = i;
		while (j--)
			test *= 2;
		if (n & test)
		{
			printf("1");
			on = 1;
		}
		else
			if (on)
				printf("0");
		test = 1;
	}
	if (!on)
		printf("0");
}
