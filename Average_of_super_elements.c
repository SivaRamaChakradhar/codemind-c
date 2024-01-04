#include<stdio.h>
int main()
{
    int b,d=0,i,j,f=0;
    scanf("%d",&b);
    int a[b];
    int c[b]={0};
    for(i=0;i<b;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<b;i++)
    {
        c[a[i]]++;
    }
    for(i=1;i<b;i++)
    {
        if(c[i]==i)
        {
            j=i-1;
             d=d+a[j];
             f++;
        }
    }
    float e=d/(float)f;
    if(f!=0)
    {
    printf("%.2f",e);
    }
    else
    {
        printf("-1");
    }
}