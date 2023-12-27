#include<stdio.h>
int main()
{
    int n,i,j,c;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        {
            for(j=i+1;j<n;j++)
            {
                if(a[j]%2!=0)
                {
                    break;
                }
                c++;
            }
        }
    }
    printf("%d",c);
    
}