//FILE: 0-puts_recursion.c
//AUTH: Emmanuel Enzeyi

#include "main.h"

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}
