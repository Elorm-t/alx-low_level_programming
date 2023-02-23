#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Program outputs a number, fizz, buzz, or fizzbuzz
 * based on a satisfied condition.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 1;

	while (i < 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else
			printf("%d", i);

		i++;
	}

	return (0);
}
