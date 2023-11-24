#include<stdio.h>
#include<math.h>
int main()
{
    int n,m,i;
    scanf("%d",&n);
    i=sqrt(n);
    if(i*i==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}