#include<stdio.h>
int main()
{
    int a=0,i,n;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            a=a+i;
        }
    }
    if(n==a)
    {
        printf("PERFECT");
    }
    else if(a<n)
    {
        printf("DEFICIENT");
    }
    else if(a>n)
    {
        printf("ABUNDANT");
    }
}