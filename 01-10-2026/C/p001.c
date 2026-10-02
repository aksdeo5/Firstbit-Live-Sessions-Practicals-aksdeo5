#include <stdio.h>

int main(void)
{
  for (int row = 1; row <= 15; row++)
  {
    for (int col = 1; col <= 15; col++)
      if (row == 1 || row == 15 || col == 1 || col == 15 || row == col ||
          row + col == 15 + 1 || col == 8 || row == 8)
        printf("* ");
      else
        printf("  ");

    printf("\n");
  }
}