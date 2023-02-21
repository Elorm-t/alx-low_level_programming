#include "main.h"

/**
 * jack_bauer - Print every minute of a day
 *
 * Description - A function that prints every minute of the day.
 */

void jack_bauer(void)
{
	int h1, h2, h2_reset, m1, m2;

	h1 = 48;
	h2_reset = 58;
	while (h1 < 51)
	{
		if (h1 == 50)
		{
			h2_reset = 52;
		}

		h2 = 48;
		while (h2 < h2_reset)
		{
			m1 = 48;
			while (m1 < 54)
			{
				m2 = 48;
				while (m2 < 58)
				{
					_putchar(h1);
					_putchar(h2);
					_putchar(':');
					_putchar(m1);
					_putchar(m2);
					_putchar('\n');

					m2++;
				}
				m1++;
			}
			h2++;
		}
		h1++;
	}
}
