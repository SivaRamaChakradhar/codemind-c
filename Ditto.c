#include<stdio.h>
int main()
{
    int x,y,p,n;
    scanf("%d%d%d",&x,&y,&p);
    n=(x-y)/(2*p);
    if(x+n*p==y-n*p || x-n*p==y+n*p)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}