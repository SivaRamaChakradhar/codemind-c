#include<stdio.h>
int main()
{
    int years;
    scanf("%d",&years);
    years=years%100;
    printf("%02d",years);
}