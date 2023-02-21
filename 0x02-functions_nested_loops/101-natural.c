#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Outpu sum of multiples of 3 and 5
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 1;
	int sum = 0;

	while (i < 1024)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			sum += i;
		}
		i++;
	}
	printf("%d\n", sum);

	return (0);
}
