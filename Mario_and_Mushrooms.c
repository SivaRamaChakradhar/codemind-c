#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d",&x);
    y=x%3;
    if(x<=3)
    {
        if(x==1)
        {
            printf("HUGE");
        }
        else if(x==2)
        {
            printf("SMALL");
        }
        else
        {
            printf("NORMAL");
        }
    }
    else
    {
        if(y==1)
        {
            printf("HUGE");
        }
        else if(y==2)
        {
            printf("SMALL");
        }
        else
        {
            printf("NORMAL");
        }
    }
}