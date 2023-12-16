#include<stdio.h>
int main()
{
    int n,i,j,s,d,e;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&s);
    for(i=0;i<n;i++)
    {
        d=a[i];
        if(s==d)
        {
            printf("True");
            e++;
            break;
        }
    }
    if(e==0)
    {
        printf("False");
    }
}