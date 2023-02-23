#include "main.h"

/**
 * more_numbers - print 10 times the numbers from 0 to 14
 *
 */

void more_numbers(void)
{
	int i = 0;
	int ch;

	while (i < 10)
	{
		ch = 0;
		while (ch < 15)
		{
			if (ch > 9)
				_putchar((ch  / 10) + 48);
			_putchar((ch % 10) + 48);
			ch++;
		}
		i++;
		_putchar('\n');
	}
}
