#include<stdio.h>
int main()
{
    int n,i,s=0;
    scanf("%d",&n);
    int odd_sum[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&odd_sum[i]);
    }
    for(i=0;i<n;i++)
    {
        if(odd_sum[i]%2 == 1)
        {
            s=s+odd_sum[i];
        }
    }
    printf("%d",s);
}