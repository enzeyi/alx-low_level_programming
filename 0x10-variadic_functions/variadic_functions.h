#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

/*
 * FILE: variadic_functions.h
 * AUTH: enzeyi
 * DESC: Header file containing all prototypes for the functions used in this project.
 */

#include <stdarg.h>

/**
 * struct printer - A new struct type defining a printer.
 * @symbol : a symbol that represents a data type
 * @print : a function pointer to a function that printd a data type corresponding to a symbol.
 */
typedef struct printer
{
	char *symbol;
	void (*print)(va_list arg);

} printer_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif

