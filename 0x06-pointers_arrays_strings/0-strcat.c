/*
 * File: 0-strcat.c
 * Auth: enzeyi
 */

/*Directive that tells the C compiler to include the to include the contents of the file:main.h in the source file:0-strcat.c*/
/*used to include header files that contain function prototypes, macro definitions, and other declarations that are needed in the source file.*/

#include "main.h"

/**
 * strcat - This function appends the src string to the dest string, overwriting the terminating null byte (\0) at the end of dest, and then adds a terminating null byte
 * @dest: pointer to the string to be concatenated upon.
 * @src: The source string to be appended to @dest.
 *
 * Return: A pointer to the destination string @dest.
 */

/*BODY CONTENT DESCRIPTIONS*/
/**/

char *_strcat(char *dest, char *src)
{
    int index = 0, dest_len = 0;

    while (dest[index++])
        dest_len++;

    for (index = 0; src[index]; index++)
        dest[dest_len++] = src[index];

    return (dest);
}
