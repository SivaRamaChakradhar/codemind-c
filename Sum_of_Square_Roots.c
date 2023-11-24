#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,i;
    float sum=0,c;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        c=sqrt(i);
        sum=sum+c;
    }
    printf("%.2f",sum);
}