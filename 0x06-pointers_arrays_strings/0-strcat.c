#include "main.h"

/**
 * *_strcat - concatenates two strings
 * @dest: destination character pointer
 * @src: source characterpointer
 *
 * Return: character pointer of concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j;

	while (dest[i] != '\0')
		i++;

	for (j = 0; j < i && src[j] != '\0'; j++)
		dest[j + i] = src[j];

	dest[j + i] = '\n';

	return (dest);
}
