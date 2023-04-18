#include <stdio.h>
/**
 * main - prints current file name
 *
 * Return: 0 (Success), 1 (FAIL)
 */
int main(void)
{
	if (__FILE__ == NULL)
		return (1);
	printf("%s\n", __FILE__);
	return (0);
}
