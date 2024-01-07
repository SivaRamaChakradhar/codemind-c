#include<stdio.h>
int main()
{
    int n,i,j,k,l;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=a[0];;i++)
    {
        l=0;
        k=0;
        for(j=0;j<n;j++)
        {
            if(i%a[j]==0)
            {
                k++;
            }
            l++;
        }
        if(k==l)
        {
            printf("%d",i);
            break;
        }
    }
}