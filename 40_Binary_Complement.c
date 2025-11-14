// Write a program to find the 1’s complement of a binary number and print it.
#include <stdio.h>

int main()
{
    long int num, rem, num1 = 0, place = 1;

    printf("Enter a binary number: \n");
    scanf("%ld", &num);

    while (num != 0)
    {
        rem = num % 10; 
        if (rem == 0)
            rem = 1; 
        else
            rem = 0; 

        num1 = num1 + rem * place; 
        place = place * 10;
        num = num / 10;
    }

    printf("1's complement = %ld\n", num1);
    return 0;
}
