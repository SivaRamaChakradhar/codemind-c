#include<stdio.h>
int main()
{
    int n,a=0,b=1,c;
    scanf("%d",&n);
    while(b<=n)
    {
        c=a+b;
        a=b;
        b=c;
    }
    if(a==n||b==n||c==n)
    {
        printf("%d",n);
    }
    else if(b-n==n-a)
    {
       printf("%d %d",a,b); 
    }
    else if(b-n<n-a)
    {
       printf("%d",b); 
    }
    else
    {
        printf("%d",a);
    }
}