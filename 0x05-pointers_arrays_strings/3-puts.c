/*
 * File: 3-puts.c
 * Auth: ENZEYI
 */

#include "main.h"

/**
 * _puts - Prints a string
 * str: The string to be printed.
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
