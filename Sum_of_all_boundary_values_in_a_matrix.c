#include<stdio.h>
int main()
{
    int b,c,d=0,i,j;
    scanf("%d%d",&b,&c);
    int a[b][c];
    for(i=0;i<b;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
     for(i=0;i<b;i++)
    {
        for(j=0;j<c;j++)
        {
             if(i==0)
             {
                 d=d+a[i][j];
             }
             else if(i==b-1)
             {
                 d=d+a[i][j];
             }
             else if(j==0)
             {
                 d=d+a[i][j];
             }
             else if(j==c-1)
             {
                 d=d+a[i][j];
             }
        }
    }
    printf("%d",d);
}