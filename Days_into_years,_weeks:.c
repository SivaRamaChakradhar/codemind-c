#include<stdio.h>
int main()
{
    int days,years,weeks;
    scanf("%d",&days);
    years=days/365;
    weeks=(days%365)/7;
    printf("%d
",years);
    printf("%d",weeks);
}