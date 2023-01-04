/*
 *File: 0-memset.c
 *Auth: Enzeyi
 */

#include "main.h"

/**
 *Writing a function that fills memory with a constant byte.
 *Prototype: char *_memset(char *s, char b, unsigned int n);
 *The _memset() function fills the first n bytes of the memory area pointed to by s with the constant byte b
 *Returns a pointer to the memory area s
 */

/**
 *memset - a function that fills the first n bytes of the memory area pointed to  by @s with the constant byte @c
 *@s: A pointer to the memory area to be filled
 *@b: The character to fill the memory area.
 *@n: The number of bytes to be filled.
 *
 *Return: A pointer to the filles memory area @s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;
	unisgned char *memory = s, value = b;

	for (index=0; index<n; index++)
		memory[index] = value;

	return(memory);
}
