#include <stdio.h>

int main(void)
{
  int num = 31; // Input

  int is_prime = 1;

  if (num <= 1)
    is_prime = 0;
  else
  {
    int i = 2;
    while (i <= num / 2)
    {
      if (num % i == 0)
      {
        is_prime = 0;
        break;
      }
      i++;
    }
  }

  if (is_prime)
    printf("%d is a prime number.\n", num);
  else
    printf("%d is not a prime number.\n", num);
}