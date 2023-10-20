#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d%d",&a,&b);
    c=(21-(a+b));
    if((a+b)>10)
    {
        printf("%d",c);
    }
    else
    {
        printf("-1");
    }
}