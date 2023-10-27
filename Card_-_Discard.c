#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    if(N<52)
    {
        printf("%d",52%N);
    }
    else
    {
        printf("0");
    }
}