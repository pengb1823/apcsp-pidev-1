#include <stdio.h>

int main()
{
  int a;
  int b = 3;
  int c;
  int tmp;

  a = 2;
  c = a + b;
  printf("Sum of %d and %d is %d\n", a, b, c);
  a = tmp;
  c = a;
  tmp = c;
}