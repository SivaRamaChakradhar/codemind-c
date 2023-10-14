#include<stdio.h>
int main()
{
    int min,H,M;
    scanf("%d",&min);
    H=(min)/60;
    M=min%60;
    printf("%d Hour(s) ",H);
    printf("%d Minute(s)",M);
}