#include<stdio.h>
int main()
{
    int i,m,n,s=0;
    scanf("%d%d",&m,&n);
    i=m;
    while(i<=n)
    {
        if(i%3==0)
        {
            s++;
        }
        i++;
    }
    printf("%d",s);
}
