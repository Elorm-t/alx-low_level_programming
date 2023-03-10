#include "main.h"

/**
 * _strspn - gets length of prefix substring
 * @s: character pointer to string
 * @accept: character pointer to prefix substring
 *
 * Return: numbers of bytes in s
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int res = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				res++;
				break;
			}
			j++;
		}
		if (accept[j] == '\0')
			break;
	}

	return (res);
}
