#include<stdio.h>
int main()
{
    int n,i,a,b,c=0;
    scanf("%d",&n);
    int d[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&d[i]);
    }
    scanf("%d%d",&a,&b);
    for( i=0;i<n;i++)
    {
        if(d[i]<a || d[i]>b)
        {
            if(d[i]>c)
            {
                c=d[i];
            }
        }
    }
    if(c==0)
    {
        printf("-1");
    }
    else
    {
        printf("%d",c);
    }
}