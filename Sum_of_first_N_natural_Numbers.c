#include<stdio.h>
int main()
{
    int N,i,sum=0;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
       sum=sum+i; 
    }
    printf("%d
",sum);
}