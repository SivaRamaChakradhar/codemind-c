#include<stdio.h>
#include<math.h>
int main()
{
    int n,m,i=0,o,p,q;
    scanf("%d",&n);
    m=n*n;
    o=n;
    while(o != 0)
    {
        o/=10;
        i++;
    }
    p=pow(10,i);
    q=m%p;
    if(n==q)
    {
        printf("Automorphic Number");
    }
    else
    {
        printf("Not an Automorphic Number");
    }
    
}