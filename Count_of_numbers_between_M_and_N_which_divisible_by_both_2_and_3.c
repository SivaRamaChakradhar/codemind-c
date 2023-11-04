#include<stdio.h>
int main()
{
    int m,n,s=0,i;
    scanf("%d%d",&m,&n);
    i=m;
    while(i<=n)
    {
        if(i%6==0)
        {
            s++;
        }
        i++;
    }
    printf("%d",s);
}