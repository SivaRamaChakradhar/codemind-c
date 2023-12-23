#include<stdio.h>
int main()
{
    int n,i,e=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0 && i%2!=0)
        {
            e++;
            break;
        }
    }
    if(e == 0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}