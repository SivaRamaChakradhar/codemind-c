#include<stdio.h>
int main()
{
    int m,n,o,p,i,j;
    scanf("%d%d",&m,&n);
    int a[m][n];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    scanf("%d%d",&o,&p);
    int b[o][p];
    for(i=0;i<o;i++)
    {
        for(j=0;j<p;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",a[i][j]+b[i][j]);
        }
        printf("
");
    }
}