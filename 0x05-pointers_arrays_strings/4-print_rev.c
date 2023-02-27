#include "main.h"

/**
 * print_rev - print a string in reverse
 * @s: character pointer
 *
 * Return: void
 */

void print_rev(char *s)
{
	int ctr = 0;

	while (s[ctr] != '\0')
		ctr++;
	ctr--;

	while (ctr >= 0)
	{
		_putchar(s[ctr]);
		ctr--;
	}
	_putchar('\n');
}
