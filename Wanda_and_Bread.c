#include<stdio.h>
int main()
{
    float n,m,k;
    scanf("%f%f%f",&n,&m,&k);
    
    if((n/m)<=k)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}