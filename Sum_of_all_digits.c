#include<stdio.h>
int main()
{
    int n,r,ds=0;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        ds=ds+r;
        n=n/10;
    }
    printf("%d",ds);
}