#include<stdio.h>
int main()
{
    int n,i,s=0,b,c=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        s=s+a[i];
    }
    for(i=0;i<n;i++)
    {
        b=s/n;
        if(a[i] >= b)
        {
            c++;
        }
    }
    printf("%d",c);
}