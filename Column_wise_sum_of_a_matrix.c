#include<stdio.h>
int main()
{
    int a,b,i,j,s;
    scanf("%d%d",&a,&b);
    int c[a][b];
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            scanf("%d",&c[i][j]);
        }
    }
    for(i=0;i<b;i++)
    {
        s=0;
        for(j=0;j<a;j++)
        {
            s+=c[j][i];
        }
        printf("%d ",s);
    }
}