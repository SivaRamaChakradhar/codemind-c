#include<stdio.h>
int main()
{
    int n,i,c;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(i>1)
        {
            if((a[i-2]%2==0&&a[i]%2!=0)||(a[i-2]%2!=0&&a[i]%2==0))
            {
               c++;
            }
        }
    }
    printf("%d",c);
}