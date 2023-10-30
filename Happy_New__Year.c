#include<stdio.h>
int main()
{
    int h,m,n;
    scanf("%d%d",&h,&m);
    n=1440-((h*60)+m);
    printf("%d",n);
}