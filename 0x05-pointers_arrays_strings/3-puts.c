/*
 * File: 3-puts.c
 * Auth: ENZEYI
 */

#include "main.h"

/**
 * PC F V SE C R
 * PC: #include "main.h"-
 * F: _puts-prints a string,followed by a new line;
 * F: _putchar-
 * V:i-int type,stores o
 * SE:
 * C:
 * R:void
 */

void _puts(char *str)
{
int i = 0;

while (str[i])
{
	_putchar(str[i]);
	i++;
}
	_putchar('\n')
}

