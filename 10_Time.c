#include <stdio.h>
int main()
{
    int time;
    printf ("ENTER TIME IN SECONDS \n");
    scanf("%d",&time);
    int h,m,s;
    h=time/3600;
    s=time%3600;
    m=s/60;
    s=s%60;
    
    printf("Hour:Min:Sec:=%d:%d:%d",h,m,s);
    return 0;
}