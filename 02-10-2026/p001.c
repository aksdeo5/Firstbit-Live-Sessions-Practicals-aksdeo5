#include <stdio.h>

int add(int, int);

int main(void)
{
  printf("%d\n", add(5, 6));
}

int add(int a, int b)
{
  return a + b;
}