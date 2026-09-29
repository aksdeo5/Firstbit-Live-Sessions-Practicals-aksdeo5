#include <stdio.h>

int main(void)
{
  int no = 53687; // Input

  int n, r1, r2, r3, r4, r5, sum;

  n = no;

  r1 = n % 10;
  n /= 10;

  r2 = n % 10;
  n /= 10;

  r3 = n % 10;
  n /= 10;

  r4 = n % 10;
  n /= 10;

  r5 = n % 10;
  n /= 10;

  sum = r1 + r2 + r3 + r4 + r5;

  printf("Digits sum: %d\n", sum);
}