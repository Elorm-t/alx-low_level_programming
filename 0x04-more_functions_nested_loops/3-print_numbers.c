#include "main.h"

/**
 * print_numbers - outputs the numbers 0 to 9
 *
 */

void print_numbers(void);
{
	int ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
