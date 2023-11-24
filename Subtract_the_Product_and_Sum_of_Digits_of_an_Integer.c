#include<stdio.h>
int main()
{
    int n,sum=0,product=1,i;
    scanf("%d",&n);
    while(n != 0)
    {
        i=n%10;
        sum=sum+i;
        product=product*i;
        n=n/10;
    }
    printf("%d",product-sum);
}