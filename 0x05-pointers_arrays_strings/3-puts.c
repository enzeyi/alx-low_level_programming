/*
 * File: 3-puts.c
 * Auth: ENZEYI
 */

#include "main.h"
#include <stdio.h>
/**
 * PC F V SE C R
 * PC: #include "main.h"-
 * PC: #include <stdio.h>
 * F: _puts-prints a string,followed by a new line;
 * F: _putchar-
 * V:i-int type,stores o
 * SE:
 * C:
 * R:void
 */

void _puts(char *str);

int main(void)
{
	char *str;
	str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
	_puts(str);
	return (0);
}

