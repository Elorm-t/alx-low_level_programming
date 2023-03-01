#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: first character pointer
 * @s2: second character pointer
 *
 * Return: 0, if s1 and s2 are equal, negative value, if s1 is less than s2,
 * positive value, if s1 is greater than s2.
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}

	return (0);
}
