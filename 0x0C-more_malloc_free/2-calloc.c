#include "main.h"
/**
 * _calloc - allocates memory
 * @nmemb: number of elements
 * @size: size of each element
 * Return: allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *out;

	if (!nmemb || !size)
		return (NULL);
	out = malloc(nmemb * size);
	if (out == NULL)
		return (NULL);
	return (out);
}
