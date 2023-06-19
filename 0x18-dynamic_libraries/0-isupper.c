#include "main.h"
/**
 * _isupper: Tests if a character is in uppercase
 * @c: character input
 * Return: 1 is c is uppercase and 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
