#include "main.h"
/**
 * _isalpha - checks is input is a letter of the aplhabet
 * @c: character checked
 * Return: 1 if true, 0 otherwise
 */
int _isalpha(int c)
{
	if (c >= 'A' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
