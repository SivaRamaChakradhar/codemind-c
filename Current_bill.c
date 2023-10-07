#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a<=199)
    {
        printf("%.2f",100+(a*1.20));
    }
    else if((a>=200) && (a<400))
    {
        printf("%.2f",100+(a*1.50));
    }
    else if((a>=400) && (a<600))
    {
        printf("%.2f",((15.0/100)*a)+a*1.80+120);
    }
    else
    {
        printf("%.2f",((15.0/100)*a)+a*2.00+120);
    }
}