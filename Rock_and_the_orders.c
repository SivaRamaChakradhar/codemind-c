#include<stdio.h>
int main()
{
    int a1,a2,a3,b1,b2,b3,c,d;
    scanf("%d%d%d%d%d%d%d%d",&d,&c,&a1,&a2,&a3,&b1,&b2,&b3);
    if(a1+a2+a3>=150 && b1+b2+b3>=150 && 2*d>c)
    {
        printf("YES");
    }
    else if((a1+a2+a3>=150 || b1+b2+b3>=150) && c<d)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    } 
}