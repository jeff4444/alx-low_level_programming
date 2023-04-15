#include <stdio.h>
#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
        int i, d, n, len, f, digit;

        i = 0;
        d = 0;
        n = 0;
        len = 0;
        f = 0;
        digit = 0;

        while (s[len] != '\0')
                len++;

        while (i < len && f == 0)
        {
                if (s[i] == '-')
                        ++d;

                if (s[i] >= '0' && s[i] <= '9')
                {
                        digit = s[i] - '0';
                        if (d % 2)
                                digit = -digit;
                        n = n * 10 + digit;
                        f = 1;
                        if (s[i + 1] < '0' || s[i + 1] > '9')
                                break;
                        f = 0;
                }
                i++;
        }

        if (f == 0)
                return (0);

        return (n);
}


/**
 * main - add numbers from the command line
 * @argc: number of command line arguments
 * @argv: list of command line arguments
 *
 * Return: 0 (Success), 1 (Fail)
 */
int main(int argc, char *argv[])
{
        int sum, i, j;

	sum = 0;
	j = 0;

	for (i = 1; i < argc; i++)
	{
		while (argv[i][j] != '\0')
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error");
				return (1);
			}
			j++;
		}
		j = 0;
		sum += _atoi(argv[i]);
	}

	return (sum);
}
