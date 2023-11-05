#include<stdio.h>
int main()
{
    int i=1,sum=1,n;
    scanf("%d",&n);
    while(i<=n)
    {
        sum=sum*i;
        i++;
    }
    printf("%d",sum);
}