//Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
#include <stdio.h>
int main()
{
    float a,b,c;
    printf("Enter three sides of a triangle \n");
    scanf("%f%f%f",&a,&b,&c);
    
    if(a==b&&b==c)
    printf("Triangle ia a Equilateral Triangle. \n");

    else if(a==b || b==c ||a==c)
    printf("Triangle ia a Isoceles Triangle. \n");

    else
    printf("Triangle ia a Scalene Triangle. \n");

    return 0;
}