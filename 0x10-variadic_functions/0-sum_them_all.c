/*FILE: 0-sum_them_all.c
 *AUTH: enzeyi
 *DESC: writing a function that returns the sum of all it's parameters
 */

#include "variadic_functions.h"
#include <stdarg.h>

/**if n == 0 , return 0
 *   otherwise - the sum of all the parameters
 *sum_them_all - returns the sum of all it's parameters
 *@n : the number of parameters passed to the function
 *@...: a variable number of parameters to calculate the sum of.
 *
 */
int sum_them_all(const unsigned int n,...)
{
	va_list nums;
	unsigned int index, sum = 0;

	va_start(nums, n);

	for (index = 0; index < n; index++)
		sum += va_arg(nums, int);

	va_end(nums);

											return (sum);
}
