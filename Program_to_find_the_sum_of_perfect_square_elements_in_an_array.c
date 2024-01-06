#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,s,ss=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        s=sqrt(a[i]);
        if(s*s==a[i])
        {
            ss+=a[i];
        }
    }
    printf("%d",ss);
}