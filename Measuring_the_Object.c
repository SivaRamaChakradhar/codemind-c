#include<stdio.h>
int main()
{
    int w,x,y,z;
    scanf("%d%d%d%d",&w,&x,&y,&z);
    if(w == x || w == y || w == z || w == x+y || w == y+z || w == z+x || w == x+y+z)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}