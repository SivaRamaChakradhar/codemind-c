#include<stdio.h>
int main()
{
    int a,b,i,j,e=0,o=0;
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
            if(c[i][j]%2 == 0)
            {
                e+=c[i][j];
            }
            else
            {
                o+=c[i][j];
            }
        }
    }
    printf("%d %d",e,o);
}