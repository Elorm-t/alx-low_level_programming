#include "main.h"

/**
 * rev_string - Reverse a string
 * @s: character pointer
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i mid, last;
	char ch;

	while (s[i] != '\0')
		i++;

	last = i;
	for (i--, mid = 0; mid < last / 2; i--, mid++)
	{
		ch = s[mid];
		s[mid] = s[i];
		s[i] = ch;
	}
}
