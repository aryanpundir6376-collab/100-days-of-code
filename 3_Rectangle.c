#include<stdio.h>
int main()
{
    int l;
    float b;
    printf("ENTER LENGTH AND BREADTH OF A RECTANGLE \n");
    scanf("%d",&l);
    scanf("%f",&b);
    printf("THE VALUE OF l and b is %d and %f \n",l,b);
    printf("THE AREA OF A RECTANGLE IS :%f \n",(l*b));
    printf("THE PERIMETER OF A RECTANGLE IS : %f",(2*(l+b)));
    return 0;
}