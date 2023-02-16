#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Program outputs the size of various types on the computer it is
 * compiled and run on.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	puts("Size of a char: %d byte(s)", sizeof(char));
	puts("Size of an int: %d bytes(s)", sizeof(int));
	puts("Size of a long int: %d byte(s)", sizeof(long int));
	puts("Size of a long long int: %d byte(s)", sizeof(long long int));
	puts("Size of a float: %d byte(s)", sizeof(float));

	return (0);
}
