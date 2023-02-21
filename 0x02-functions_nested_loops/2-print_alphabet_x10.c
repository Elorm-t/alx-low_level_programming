#include "main.h"

/**
 * print_alphabet_x10 - A function the prints the lower-case alphabets
 * ten times.
 * @void - Takes no parameters.
 */

void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		char ch = 'a';

		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		i++;
		_putchar('\n');
	}
}
