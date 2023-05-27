#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - main
 * Return: 0
 */
int main(void)
{
	int n, fact = 1, lastDigit, first = 0;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	printf("Last digit of %d ", n);
	while ((n > (-10 * fact)) && (n < (10 * fact)))
		fact *= 10;
	if (fact != 1)
		first = n / fact;
	lastDigit = n - (first * fact);
	if (lastDigit == 0)
		printf("is %d and is 0\n", lastDigit);
	else if (lastDigit < 6)
		printf("is %d and is less than 6 and not 0\n", lastDigit);
	else
		printf("is %d and is greater than 5\n", lastDigit);
	return (0);
}
