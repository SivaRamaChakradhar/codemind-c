#include<stdio.h>
int main()
{
    int n,r=0,rem,org;
    scanf("%d",&n);
    org=n;
    while(n!=0)
    {
        rem=n%10;
        r=r*10+rem;
        n=n/10;
    }
    if(org==r)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
}