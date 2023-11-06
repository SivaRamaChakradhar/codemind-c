#include<stdio.h>
int main()
{
    int n,i,sum=0,product=1;
    scanf("%d",&n);
    while(n>0)
    {
        i=n%10;
        sum=sum+i;
        product=product*i;
        n=n/10;
    }
    if(sum == product)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}