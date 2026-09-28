#include <stdio.h>

int main(void)
{
  char c = '@';

  if (c >= 'A' && c <= 'Z')
    printf("Uppercase alphabet");
  else if (c >= 'a' && c <= 'z')
    printf("Lowercase alphabet");
  else if (c >= '0' && c <= '9')
    printf("Digit");
  else
    printf("Symbol");
}