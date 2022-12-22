#include <stdio.h>

int main(void)
{
  int n;
  int a[5];
  int *p;

  a[2] = 1024;
  p = &n;
  int a[5] = {1, 2, 98, 4, 5};
    printf("a[2] = %d\n", a[2]);
    return 0;
   /* ...so that this prints 98\n */
  printf("a[2] = %d\n", a[2]);
  return (0);
}
