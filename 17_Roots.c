//Write a program to find the roots of a quadratic equation and categorize them.
#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c;
    int det;
    float r1, r2;
    printf("ENTER THE VALUE OF COEFFICIENTS a,b,c.\n");
    scanf("%d %d %d ",&a,&b,&c);

    if (a == 0)
    {
        printf("NOT A QUADRATIC EQUATION. \n");
    }
    
    else
    {
    det = (b * b) - (4 * a * c);
    
    if(det>0)
    {
        printf("ROOTS ARE REAL AND DISTINCT.\n");
        r1=(-b+sqrt(det))/(2.0*a);
        r2=(-b-sqrt(det))/(2.0*a);
        printf("ROOT1=%f AND ROOT2=%f \n",r1,r2);
    }
    
    else if (det==0)
    {
       printf("ROOTS ARE REAL AND EQUAL.\n");
       r1=r2=-b/(2.0*a); 
       printf("ROOT1=%f AND ROOT2=%f \n",r1,r2);
    }
    else 
    printf("IMAGINARY ROOTS");

    }
    return 0;
}