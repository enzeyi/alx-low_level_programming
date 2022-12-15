/*include is used to include the contents of header files in our C program*/
#include "main.h"
#include <unistd.h>

/**
 *_putchar - writes the character c to stdout
 *@c: The character to print
 *Return: On success 1
 *On error -1 is returned and errno is set approaprietly
 */

int _putchar(char c)
{
	return (write(1,&c,1));	
}
