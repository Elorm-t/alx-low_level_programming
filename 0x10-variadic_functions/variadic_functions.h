#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separatpr, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_char(va_list parg);
void print_int(va_list parg);
void print_float(va_list parg);
void print_str(va_list parg);

typedef struct gettype
{
	char *type;
	void (*f)();
} gettype;

#endif /* VARIADIC_FUNCTIONS_H */
