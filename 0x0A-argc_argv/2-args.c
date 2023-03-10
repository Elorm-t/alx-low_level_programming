#include <stdio.h>

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector, that is, array of arguments
 *
 * Description: A program that prints all arguments passed to it.
 *
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (argc - 1 != 0)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}
