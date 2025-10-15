//Write a program to swap two numbers using a third variable.
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("ENTER TWO NUMBERS: \n");
    scanf("%d %d",&a,&b);

    printf("The values of a and b before swapping is :a=%d and b=%d \n",a,b);

    c=a;
    a=b;
    b=c;
    printf("The values of a and b after swapping is :a=%d and b=%d \n",a,b);
    return 0;

}
