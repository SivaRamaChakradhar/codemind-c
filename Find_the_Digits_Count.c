#include<stdio.h>
int main()
{
    int a,n=0;
    scanf("%d",&a);
    while(a!=0)
    {
        n=n+1;
        a=a/10;
    }
    printf("%d",n);
}