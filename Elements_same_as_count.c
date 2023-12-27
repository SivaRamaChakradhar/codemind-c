#include<stdio.h>
int main()
{
    int n,m,i,j=0;
    scanf("%d",&n);
    int a[n],b[n]={0};
    for(i=0;i<n;i++)
    {
        scanf("%d ",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        b[a[i]]++;
    }
    for(i=1;i<n;i++)
    {
        if(b[i] == i)
        {
            printf("%d ",a[i-1]);
            j++;
        }
    }
    if(j==0)
    {
        printf("-1");
    }
}