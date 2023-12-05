#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d;
    scanf("%d%d",&a,&b);
    c=pow(10,b);
    d=a%c;
    while(a>=c)
    {
        a/=10;
    }
    printf("%d",abs(d-a));
}