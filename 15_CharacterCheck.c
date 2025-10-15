#include<stdio.h>
int main()
{
    char ch;
    printf("ENTER A CHARACTER \n");
    scanf("%c",&ch);

    if(ch>=65 && ch<=90)
    printf("IT IS A UPPERCASE CHARACTER\n");
    else if (ch>=97 && ch<=122)
    printf("IT IS A LOWERCASE CHARACTER \n");
    else if (ch>=48 && ch<=57)
    printf("IT IS A DIGIT \n");
    else 
    printf("IT IS A SPECIAL CHARACTER \n");
    return 0;
    
}