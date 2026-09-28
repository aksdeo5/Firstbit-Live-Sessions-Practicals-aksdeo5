#include <stdio.h>

int main(void)
{
  int a = 10, b = 20, c = 30;

  if (a > b)
    if (a > c)
      printf("%d is greatest\n", a);
    else
      printf("%d is greatest\n", c);
  else if (b > a)
    if (b > c)
      printf("%d is greatest\n", b);
    else
      printf("%d is greatest\n", c);
}