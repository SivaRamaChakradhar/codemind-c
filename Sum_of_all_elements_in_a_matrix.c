#include<stdio.h>
int main()
{
    int a,b,i,j;
    scanf("%d%d",&a,&b);
    int c[a][b],s=0;
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            scanf("%d",&c[i][j]);
            s+=c[i][j];
        }
    }
    printf("%d",s);
}