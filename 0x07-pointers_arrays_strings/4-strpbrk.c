#include "main.h"

/**
 * *_strpbrk - searches string for any of a set of bytes
 * @s: character pointer to string
 * @accept: character pointer of string to search
 *
 * Return: character pointer to the byte in s that matches byte in accept
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (s[i]);
		}
	}

	return ('\0');
}
