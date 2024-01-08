#include<stdio.h>
int main()
{
    int n,i,m,b=0,c;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(b<a[i])
        {
            b=a[i];
        }
    }
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
        c=a[i]+m;
        if(c>=b)
        {
            printf("True ");
        }
        else
        {
            printf("False ");
        }
    }
}