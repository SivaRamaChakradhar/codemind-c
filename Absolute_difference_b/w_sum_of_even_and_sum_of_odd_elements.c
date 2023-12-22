#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,j,es=0,os=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            es+=a[i];
        }
        else
        {
            os+=a[i];
        }
    }
    printf("%d",abs(es-os));
}