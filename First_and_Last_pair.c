#include<stdio.h>
int main()
{
    int n,i,j,pairs;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    if(n%2==0)
    {
        for(i=0;i<n/2;i++)
        {
            printf("%d %d ",a[i],a[n-i-1]);
        }
    }
    else
    {
        for(i=0;i<n/2+1;i++)
        {
            if(i<n/2)
            {
                printf("%d %d ",a[i],a[n-i-1]);
            }
            else
            {
                printf("%d 0 ",a[i]);
            }
        }
    }
}