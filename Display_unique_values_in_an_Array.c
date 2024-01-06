#include<stdio.h>
int main()
{
    int n,i,j,m,o=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        m=0;
        for(j=0;j<n;j++)
        {
            if(a[j]==a[i])
            {
                m++;
            }
        }
        if(m==1)
        {
            printf("%d ",a[i]);
            o++;
        }
    }
    if(o==0)
    {
        printf("-1");
    }
}