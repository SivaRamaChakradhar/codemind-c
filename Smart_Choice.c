#include<stdio.h>
int main()
{
    int x,y,a,b,c,d;
    scanf("%d%d",&x,&y);
    a=500-(2*x);
    b=1000-4*(x+y);
    c=1000-(4*y);
    d=500-2*(x+y);
    if(a+b>c+d)
    {
        printf("%d",a+b);
    }
    else
    {
        printf("%d",c+d);
    }
}