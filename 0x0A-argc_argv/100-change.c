#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - calculate the minimum amount of change
 * @argc: number of cmd line arguments
 * @argv: list of cmd line arguments
 *
 * Return: 1 (Fail), 0 (Success)
 */
int main(int argc, char *argv[])
{
	int cent, coin;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cent = atoi(argv[1]);
	coin = 0;
	if (cent >= 0)
	{
		if (cent >= 25)
		{
			coin += cent / 25;

			cent -= coin * 25;
		}
		if (cent >= 10)
		{
			coin += cent / 10;
			cent -= coin * 10;
		}
		if (cent >= 5)
		{
			coin += cent / 5;
			cent -= coin * 5;
		}
		if (cent >= 2)
		{
			coin += cent / 2;
			cent -= coin * 2;
		}
		if (cent >= 1)
		{
			coin += cent;
		}

		printf("%d\n", coin);
	}
	else
	{
		printf("0\n");
	}

	return (0);
}	
