#include<stdio.h>
int main()
{
    int N,M;
    scanf("%d%d",&N,&M);
    if(M%2==0 || N%2==0)
    {
        printf("Player 1");
    }
    else 
    {
        printf("Player 2");
    }
}