#include<stdio.h>
int main()
{
    int n,m,i,j,s;
    scanf("%d%d",&n,&m);
    int o[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&o[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        s=0;
        for(j=0;j<m;j++)
        {
           s+=o[i][j];
        }
        printf("%d ",s);
    }
}