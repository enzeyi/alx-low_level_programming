/*FILE: 0x10-variadic_functions
 *AUTH: enzeyi
 *DESC: a function that prints numbers, followed by a new line.
 */

#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/*FN: print_number-Prints numbers , followed by a new line 
 *RETURN: void
 *PARAMS: const char *separator, const unsigned int n, ...
 *@separator : string to be printed between numbers
 *@n : number of integers passed to the function
 *@... : a variable number of numbers to be printed.
 *printf() : allowed
 *If separator == 0 - DON'T PRINT
 *Print a new line at the end of the function.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int index;

	va_start(nums, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(nums, int));

		if (index != (n - 1) && separator != NULL)
													printf("%s", separator);
	}

	printf("\n");

	va_end(nums);
}
