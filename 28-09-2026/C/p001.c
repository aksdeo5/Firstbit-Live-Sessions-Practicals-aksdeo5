#include <stdio.h>

int main(void)
{
  int marks = 86;

  if (marks >= 75)
    printf("A+");
  else if (marks >= 55)
    printf("B+");
  else if (marks >= 45)
    printf("C+");
  else if (marks >= 35)
    printf("Pass");
  else
    printf("Fail");
}