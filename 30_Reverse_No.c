// Write a program to reverse a given number.
#include <stdio.h>
int main()
{
  int n;
  printf("Enter the number.\n");
  scanf("%d", &n);
  int c = 0;
  int ld;
  int m = 0;

  while (n != 0)
  {
    ld = n % 10;
    m = (m * 10) + ld;
    n = n / 10;
  }
  printf("Number after reversing it : %d", m);
  return 0;
}
