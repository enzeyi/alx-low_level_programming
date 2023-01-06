/**FILE: _putchar.c
 *AUTH: copied
 *PROJ: Creating the _putchar func for re-use in the project tasks
 */

#include "main.h"
#include <unistd.h>

/**
 * _putchar - func that writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
