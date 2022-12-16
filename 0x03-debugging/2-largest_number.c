#include "main.h"

/**
 * largest_number : returns the largest number out of the three numbers
 * a first interger
 * b second integer
 * c third integer
 * return largest number among the three.
 */

int largest_number(int a, int b, int c)
{
int largest_number;

if (a>b)
{
if(a>c)
{
	largest=a;
}
else
{
largest=c;
}
}
else if (b>c)
{
largest=b;
}
else
{
largest=c;
}

return(largest);
}
