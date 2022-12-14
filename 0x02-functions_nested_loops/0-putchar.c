#include <stdio.h>
/*0-putchar.c prints the word _putchar on the stdout
 *_putchar: The word to print
 *Return: 0
 *Function name: print_putchar
 *Return-type: int
 *parameter: char
*/

int print_putchar(char _putchar) {
return (write(1, &_putchar, 1))
}
