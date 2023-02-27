#include "main.h"

/**
 * puts2 - print every other character;
 * @str: character pointer
 *
 * Return: void
 */

void puts2(char *str)
{
	int ctr = 0;
	int len = _strlen(str);

	while (ctr < len)
	{
		_putchar(str[ctr]);
		ctr += 2;
	}

	_putchar('\n');
}
