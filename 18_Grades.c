/*Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: 
90-100: Grade A 
80-89: Grade B 
70-79: Grade C 
60-69: Grade D 
below 60: Grade F.
*/
#include<stdio.h>
int main()
{
    int per;
    printf("ENTER YOUR PERCENTAGE\n");
    scanf("%d",&per);

    printf("Your percentage is: %d\n",per);
    
    if(per>=90 && per<=100)
    printf("GRADE A");
    else if(per>=80 && per<=89)
    printf("GRADE B");
    else if(per>=70 && per<=79)
    printf("GRADE C");
    else if(per>=60 && per<=69)
    printf("GRADE D");
    else if(per<60)
    printf("GRADE F");

    return 0;
}