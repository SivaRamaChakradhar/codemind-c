#include<stdio.h>
int main()
{
    int b,c=0,d,e=0,i,j;
    scanf("%d",&b);
    int a[b];
    for(i=0;i<b;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1000000;i>0;i--)
    {
        c=0;
        for(j=0;j<b;j++)
        {
            if(a[j]%i==0)
            {
                c++;
            }
        }
        if(c==b&&i!=1)
        {
            printf("%d",i);
            e++;
            break;
        }
    }
    if(e==0)
    {
        printf("1");
    }
}