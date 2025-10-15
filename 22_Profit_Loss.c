//Write a program to find profit or loss percentage given cost price and selling price.
#include<stdio.h>
int main()
{
    float cp,sp,p,l,pp,lp;
    printf("Enter cost price and selling price.\n");
    scanf("%f%f",&cp,&sp);

    if(cp>sp)
    {
        l=cp-sp;
        lp=(l/cp)*100;
        printf("LOSS PERCENTAGE: %f%% \n",lp);
    }
    else if(sp>cp)
    {
        p=sp-cp;
        pp=(p/cp)*100;
        printf("PROFIT PERCENTAGE: %f%% \n",pp);
    }
    else
    printf("NO PROFIT NO LOSS. \n");

    return 0;
}