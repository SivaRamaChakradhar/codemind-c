#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,i;
    scanf("%d%d",&a,&b);
    float sum=0;
    for(i=a;i<=b;i++)
    {
        sum=sum+sqrt(i);
    }
    printf("%.2f",sum);
}