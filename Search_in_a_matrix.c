#include<stdio.h>
int main()
{
    int a,b,i,j,d,e=0;
    scanf("%d%d",&a,&b);
    int c[a][b];
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            scanf("%d",&c[i][j]);
        }
    }
    scanf("%d",&d);
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            if(d == c[i][j])
            {
                e++;
                break;
            }
        }
    }
    printf("%d",e);
}