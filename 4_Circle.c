//Write a program to calculate the area and circumference of a circle given its radius.
#include<stdio.h>
int main()
{
    float r;
    printf("ENTER RADIUS OF A CIRCLE\n");
    scanf("%f",&r);
    printf("THE AREA OF A CIRCLE IS: %f \n",(3.14*r*r));
    printf("THE CIRCUMFERENCE OF A CIRCLE IS :%f \n",(2*3.14*r));
    return 0;

}
