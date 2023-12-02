#include<stdio.h>
int main()
{
    int n,s=0;
    scanf("%d",&n);
    while(n != 0)
    {
        s=s+n%10;
        n=n/10;
        if((n==0) && (s>9))
        {
            n=s;
            s=0;
        }
    }
    printf("%d",s);
}