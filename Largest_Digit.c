#include<stdio.h>
int main()
{
    int n,i,l=0;
    scanf("%d",&n);
    while(n>0)
    {
        i=n%10;
        if(i>l)
        {
            l=i;
        }
        n=n/10;
    }
    printf("%d",l);
}