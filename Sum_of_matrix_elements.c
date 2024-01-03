#include<stdio.h>
int main()
{
    int a,b,i,j,k=0;
    scanf("%d%d",&a,&b);
    int c[a][b];
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            scanf("%d",&c[i][j]);
        }
    }
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            k+=c[i][j];
        }
    }
    printf("%d",k);
}