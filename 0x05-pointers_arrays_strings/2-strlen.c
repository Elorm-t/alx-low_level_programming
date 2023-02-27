#include "main.h"

/**
 * _strlen - returns length of string
 * @s: character pointer
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int i = 0;
	int counter = 0;

	while (s[i] == '\0')
		counter++;

	return (counter);
}
