/*
 * FILE: 0-create_array.c
 * AUTH: enzeyi
 */

#include "main.h"
#include <stdlib.h>

/**
 * make_array_initialize - makes an array of chars and
 *                initializes it with a specific char.
 * @size: The size of the array to be initialized.
 * @v: The specific char to intialize the array with.
 *
 * Return: If size == 0 or the function fails - NULL.
 *         Otherwise - a pointer to the array.
 */
char *make_array_initialize(unsigned int size, char v)
{
	char *array;
	unsigned int index;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		array[index] = v;

	return (array);
}
