#include "main.h"

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements
 * @size: byte size of an element
 *
 * Return: NULL if nmemb or size is 0, malloc fails, or a pointer
 * to allocated memory if successful.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i;
	int *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < nmemb; i++)
		*(ptr + i) = 0;

	return (ptr);
}
