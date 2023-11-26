#include<stdio.h>
int main()
{
    int t,n,a,b,k,p=0,i,j;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        p=0;
        scanf("%d%d%d%d",&n,&a,&b,&k);
        for(j=1;j<=n;j++)
        {
            if(j%a==0 && j%b!=0 || j%b==0 && j%a!=0)
            {
                p++;
            }
        }
        if(p>=k)
        {
            printf("Win
");
        }
        else
        {
            printf("Lose
");
        }
    }
}