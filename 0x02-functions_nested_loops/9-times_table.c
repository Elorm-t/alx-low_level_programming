#include "main.h"

/**
 * times_table - Output of the nine times table
 * @void: Takes no parameters
 *
 * Description: A function that prints a nine by nine nine-times-table.
 */

void times_table(void)
{
	int col = 0, row = 0, product, f_digit, l_digit;

	while (row <= 9)
	{
		col = 0;
		while (col <= 9)
		{
			product = row * col;
			f_digit = product / 10;
			l_digit = product % 10;

			if (col == 0)
			{
				_putchar('0');
			}
			else if (product < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(l_digit + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(f_digit + '0');
				_putchar(l_digit + '0');
			}
			col++;
		}
		row++;
		_putchar('\n');
	}
}
