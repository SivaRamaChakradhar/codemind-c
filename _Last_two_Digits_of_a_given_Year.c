#include<stdio.h>
int main()
{
    int year;
    scanf("%d",&year);
    year=year%100;
    printf("%.2d",year);
}