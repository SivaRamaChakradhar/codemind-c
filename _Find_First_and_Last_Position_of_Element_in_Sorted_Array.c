#include<stdio.h>
int main()
{
    int n,i,j,k,l;
    scanf("%d",&n);
    int a[n],c=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&j);
    for(i=0;i<n;i++)
    {
        if(j == a[i])
        {
          k=i;
          c++;
          break;
        }
    }
    for(i=n-1;i>=0;i--)
    {
        if(a[i]==j)
        {
            l=i;
            c++;
            break;
        }
    }
    if(c==0)
    {
        printf("-1 -1");
    }
    else
    {
        printf("%d %d",k,l);
    }
}