#include<stdio.h>
int main()
{
    int t,i,j,l,r,a;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d%d",&l,&r);
        a=0;
        for(j=l;j<=r;j++)
        {
            if((j%10==2)||(j%10==3)||(j%10==9))
            {
               a++; 
            }
        }
        printf("%d
",a);
    }
}
    