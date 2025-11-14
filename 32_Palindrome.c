// Write a program to check whether a given no. ia a palindrome no. or not .
#include <stdio.h>
int main()
{
  int n;
  printf("Enter the number.\n");
  scanf("%d", &n);
  int temp =n;
  int c = 0;
  int ld;
  int m = 0;

  while (temp != 0)
  {
    ld = temp % 10;
    m = (m * 10) + ld;
    temp= temp / 10;
  }
  if(m==n)
  printf("Number is palindrome.\n");
  else
  printf("Number is not palindrome.\n");

  return 0;
}