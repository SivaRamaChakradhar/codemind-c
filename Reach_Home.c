#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    if(5*x == y || 5*x >= y)
    {
        printf("YES");
    }
    else 
    {
         printf("NO");
    }
}