// Write a program to input two numbers and display their sum, difference, product, and quotient.
#include <stdio.h>
int main()
{
    int a,b;
    printf("ENTER TWO NUMBERS \n");
    scanf("%d %d",&a,&b);

    printf("The sum of two numbers is : %d\n",(a+b));
    printf("The difference of two numbers is : %d\n",(a-b));
    printf("The product of two numbers is : %d\n",(a*b));
    printf("The quotient of two numbers is : %d\n",(a/b));
    return 0;

}
