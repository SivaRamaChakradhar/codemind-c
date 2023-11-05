#include<stdio.h>
int main()
{
    int m,n,i=1;
    scanf("%d%d",&m,&n);
    while(1)
    {
        if(i%n==0 && i%m==0)
        {
           break;
        }
        i++;
    }
    printf("%d",i);
}