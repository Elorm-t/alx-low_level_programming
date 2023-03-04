#include "main.h"

/**
 * *_strchr - locates a character in a string
 * @s: character pointer to string
 * @c: character to be located in string
 *
 * Return: first occurrence of character c in string
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0, s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	if (s[i] == c)
		return (s + i);

	return ('\0');
}
