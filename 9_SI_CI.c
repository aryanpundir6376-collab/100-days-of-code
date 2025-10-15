//Write a program to calculate simple and compound interest for given principal, rate, and time.
#include <stdio.h>
#include <math.h>
int main()
{
    float p,r,t;
    printf("ENTER PRINCIPAL VALUE, RATE AND TIME \n");
    scanf("%f %f %f",&p,&r,&t);

    float SI=0,CI=0,C_I=0;
    SI=(p*r*t)/100.0;
    CI=p*pow(1+(r/100),t);
    C_I=CI-p;
    printf("SIMPLE INTEREST : %f \n",SI); 
    printf("COMPOUND INTEREST : %f \n",C_I);
    
    return 0;

}
