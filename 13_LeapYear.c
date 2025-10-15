#include<stdio.h>
int main()
{
    int yr;
    printf("ENTER A YEAR TO BE CHECKED FOR A LEAP YEAR\n");
    scanf("%d",&yr);

    if (yr%4==0 && yr%100!=0 || yr%400==0)
    printf("%d is a leap year.",yr);

    else 
    printf("%d is not a leap year.",yr);

    return 0;
    
}