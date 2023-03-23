#include "variadic_functions.h"

/**
 * print_strings - prints strings given in variable args
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list parg;

	va_start(parg, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(parg, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(parg);
}
