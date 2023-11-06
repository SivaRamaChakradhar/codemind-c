#include<stdio.h>
int main()
{
    float n,i,s=0;
    scanf("%f",&n);
    for(i=0;i<n;i++)
    {
       s=s+1/(1+i); 
    }
    printf("%.2f",s);
}