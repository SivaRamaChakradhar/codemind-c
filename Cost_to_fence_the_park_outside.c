#include<stdio.h>
int main()
{
    int l,b,w,c,x;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    x=((l+2*w)*(b+2*w)-l*b)*c;
    printf("%d",x);
    
}