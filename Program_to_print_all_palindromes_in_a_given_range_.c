#include<stdio.h>
int main()
{
    int a,b,n,r,rem,i;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        n=i;
        r=0;
        while(n)
        {
            rem=n%10;
            n=n/10;
            r=r*10+rem;
        }
        if(i==r)
        {
            printf("%d ",i);
        }
    }
}