#include<stdio.h>
int main()
{
    int l,b,w,c;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    if(l<=2*w || b<=2*w)
    {
        printf("Impossible");
    }
    else
    {
        printf("%d",c*((l*b)-((l-2*w)*(b-2*w))));
    }
}