#include<stdio.h>
int main()
{
    int a,b,i=1;
    scanf("%d%d",&a,&b);
    while(1)
    {
        if(i%a==0 && i%b==0)
        {
            break;
        }
        i++;
    }
    printf("%d",i);
}