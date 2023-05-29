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
	unsigned int i = 0;

	if (!nmemb || !size)
		return (NULL);
	out = malloc(nmemb * size);
	if (out == NULL)
		return (NULL);
	while (i < (nmemb * size))
	{
		out[i] = 0;
		i++;
	}
	return (out);
}
