#include "main.h"

/**
 * *_strncat - concatenates strings using n bytes from src
 * @dest: destination character pointer
 * @src: source character pointer
 * @n: number of bytes
 *
 * Return: character pointer of concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j;

	while (dest[i] != '\0')
		i++;

	for (j = 0; src[j] != '\0' && n > 0; j++, i++, n--)
		dest[i] = src[j];

	return (dest);
}
