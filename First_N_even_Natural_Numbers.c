#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=2*n;i>=1;i--)
    {
        if(i%2==0)
        {
            printf("%d ",i);
        }
    }
}