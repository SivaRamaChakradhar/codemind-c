#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int d=b*c;
    int e=a/d;
    if(a%d==0)
    {
        printf("%d",e);
    }
    else
    {
        printf("%d",e+1);
    }
}