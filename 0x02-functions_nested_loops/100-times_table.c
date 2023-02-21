#include "main.h"

/**
 * print_times_table - print n by n times-table
 * @n: size of the table
 *
 */

void print_times_table(int n)
{
	int row = 0, col, product, f_digit, m_digit, l_digit;

	while (row <= n)
	{
		col = 0;
		while (col <= n)
		{
			product = row * col;
			f_digit = product / 100;
			m_digit = (product / 10) % 10;
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
				_putchar(' ');
				_putchar(l_digit + '0');
			}
			else if (product >= 10 && product < 100)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(m_digit + '0');
				_putchar(l_digit + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(f_digit + '0');
				_putchar(m_digit + '0');
				_putchar(l_digit + '0');
			}
			col++;
		}
		row++;
		_putchar('\n');
	}
}
