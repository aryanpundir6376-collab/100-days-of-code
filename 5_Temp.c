#include<stdio.h>
int main ()
{
    float c;
    printf("ENTER THE TEMPERATURE IN CELCIUS \n");
    scanf("%f",&c);
    printf("THE TEMPERATURE IN FAHRENHIET IS %f \n",((9/5.0)*c)+32);
    return 0;
}
