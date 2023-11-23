#include<stdio.h>
int main()
{
    int a,b,c=1,d=0,i,j,e,f;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        c=1;
        d=0;
        scanf("%d",&b);
        e=b;
        while(e!=0)
        {
            f=e%10;
            e=e/10;
            c=1;
            for(j=1;j<=f;j++)
            {
            c=c*j;
            }
            d=d+c;
        }
        if(d==b)
        {
            printf("Strong
");
        }
        if(d!=b)
        {
            printf("Not Strong
");
        }
    }
}