//Write a program to swap two numbers without using a third variable.
#include<stdio.h>
int main()
{
    int a,b;
    printf("ENTER TWO NUMBERS: \n");
    scanf("%d %d",&a,&b);

    printf("The values of a and b before swapping is :a=%d and b=%d \n",a,b);

    a=a+b;
    b=a-b;
    a=a-b;
    printf("The values of a and b after swapping is  :a=%d and b=%d \n",a,b);
    return 0;

}
