#include "variadic_functions.h"

/**
 * print_char - prints type char from variable arguments
 * @parg: argument pointer to next argument in list of variable args
 */

void print_char(va_list parg)
{
	printf("%c", va_arg(parg, int));
}

/**
 * print_int - prints type int from variable arguments
 * @parg: argument pointer to next argument in list of variable args
 */

void print_int(va_list parg)
{
	printf("%d", va_arg(parg, int));
}

/**
 * print_float - prints type float from variable arguments
 * @parg: argument pointer to next argument in list of variable args
 */

void print_float(va_list parg)
{
	printf("%f", va_arg(parg, double));
}

/**
 * print_str - prints string from variable arguments
 * @parg: argument pointer to next argument in list of variable args
 */

void print_str(va_list parg)
{
	char *str;

	str = va_arg(parg, char *);
	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}

/**
 * print_all - prints char, int, float, and string given in variable args
 * @format: string which determines the type to print
 */

void print_all(const char * const format, ...)
{
	int i = 0, j;
	char *sep;
	va_list pargs;

	gettype buff[] = {
		{"c", print_char },
		{"i", print_int },
		{"f", print_float},
		{"s", print_str}
	};

	sep = "";

	va_start(pargs, format);

	while (format != NULL && format[i / 4] != '\0')
	{
		j = i % 4;
		if (buff[j].type[0] == format[i / 4])
		{
			printf("%s", sep);
			buff[j].f(pargs);
			sep = ", ";
		}
		i++;
	}

	printf("\n");

	va_end(pargs);
}
