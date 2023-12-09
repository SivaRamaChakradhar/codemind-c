#include<stdio.h>
int main()
{
    int a,b,x,y;
    scanf("%d%d%d%d",&a,&b,&x,&y);
    float c=float(a)/x;
    float d=float(b)/y;
    if((c>d))
    {
        printf("Jesse");
    }
    else if((c==d))
    {
        printf("Both");
    }
    else
    {
        printf("Walter");
    }
}