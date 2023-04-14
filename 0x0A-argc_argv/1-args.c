#include <stdio.h>
#include "main.h"
/**
 * main- prints the number of arguments passed in
 * @argc: Number of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc)
{
	int i;

	i = argc--;
	printf("%d\n", i);
	return (0);
}
