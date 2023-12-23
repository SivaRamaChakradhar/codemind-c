#include<stdio.h>
int main()
{
    int n,i,j=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        {
            j++;
        }
    }
    if(j == n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}