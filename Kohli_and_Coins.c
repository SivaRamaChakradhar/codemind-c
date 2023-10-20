#include<stdio.h>
int main()
{
    int X;
    scanf("%d",&X);
    if(X%5 == 0 && X%10 == 0)
    {
        printf("%d",X/10);
    }
    else if(X%5 == 0 && X%10 != 0)
    {
        printf("%d",(X/10)+1);
    }
    else 
    {
        printf("-1");
    }
    
}