/*
 * File: 2-strlen.c
 * Auth: ENZEYI
 */

#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: The string to get the length of.
 *
 * Return: The length of @s.
 *
 */

int _strlen(char *s)
{
int count = 0;
while (*(s + count) != '\0')
	count++;
return (count);
}

