#include <stdio.h>

int main(void)
{
  for (int num = 1; num <= 10000; num++)
  {
    int is_prime = 1;

    if (num < 2)
      is_prime = 0;
    else
      for (int i = 2; i <= num / 2; i++)
      {
        if (num % i == 0)
          is_prime = 0;
        break;
      }

    if (is_prime)
      printf("%d\n", num);
  }
}