#include<stdio.h>
int main()
{
    int X,Y;
    scanf("%d%d",&X,&Y);
    float profit,profit_percentage;
    profit=Y-X;
    profit_percentage=(profit/X)*100.0;
    printf("%.2f",profit_percentage);
    
}