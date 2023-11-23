#include<stdio.h>
int main()
{
    int n,c,d=0,e=0;
    scanf("%d",&n);
    while(n!=0)
    {
        c=n%10;
        if(c%2==0)
        {
            d++;
        }
        else {
            e++;
        }n/=10;
    }
    if(e==0&&d>1)
    {
        printf("Even");
    }
    else if(d==0&&e>1)
    {
        printf("Odd");
    }
    else {
        printf("Mixed");
    }
}