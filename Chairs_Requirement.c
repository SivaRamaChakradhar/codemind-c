#include<stdio.h>
int main()
{
    int x,y,z;
    scanf("%d%d",&x,&y);
    if (x>y)
    {
        printf("%d",x-y);
    }
    else if(x<y)
    {
        printf("%d",y-x);
    }
    else
    {
        printf("%d",0);
    }
}