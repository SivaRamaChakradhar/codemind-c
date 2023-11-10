#include<stdio.h>
int main()
{
    int n,a=0,b=1,i=1,j=1;
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d ",a);
        a=b;
        b=j;
        j=a+b;
        i++;
    }
}