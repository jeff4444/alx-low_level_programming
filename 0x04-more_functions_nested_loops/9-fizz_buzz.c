#include <stdio.h>
/**
 * main - Prints out numbers from 1 to 100 but
 * if number is a multiple of 3 and 5, print FizzBuzz
 * if number is a nmultiple of 3, print Fizz
 * if number is a multiple of 5, print Buzz
 * Return: 0 Always
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 15) == 0)
		{
			printf("FizzBuzz ");
		}
		else if ((i % 3) == 0)
		{
			printf("Fizz ");
		}
		else if ((i % 5) == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\b\n");
	return (0);
}
