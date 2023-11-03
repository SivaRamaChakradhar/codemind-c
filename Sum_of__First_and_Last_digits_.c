#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d",&a);
    b=a;
    while(a>10)
    {
        a=a/10;
    }
    printf("%d",a+b%10);
}