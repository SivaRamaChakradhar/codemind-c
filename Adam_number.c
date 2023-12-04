#include<stdio.h>
int main()
{
    int n,m,s,sr=0,r=0,reverse_digit_number;
    scanf("%d",&n);
    m=n;
    s=n*n;
    while(n!=0)
    {
        r=r*10+n%10;
        n=n/10;
    }
    reverse_digit_number=r*r;
    while(s!=0)
    {
        sr=sr*10+s%10;
        s=s/10;
    }
    if(sr==reverse_digit_number && m%10!=0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}