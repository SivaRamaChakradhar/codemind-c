#include<stdio.h>
#include<math.h>
int main()
{
    int N,i,j,sum=0,M=0;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        sum=sum+i*i;
    }
    for(j=1;j<=N;j++)
    {
        M=M+j;
    }
    printf("%d",M*M-sum);
}