#include<stdio.h>
int main()
{
    float bs,da,hra,gs;
    scanf("%f",&bs);
    
    if(bs<=10000)
    {
        da=(80/100.0)*bs;
        hra=(20/100.0)*bs;
        gs=bs+da+hra;
        printf("%.2f",gs);
    }
    else if(bs<=20000)
    {
        da=(90/100.0)*bs;
        hra=(25/100.0)*bs;
        gs=bs+da+hra;
        printf("%.2f",gs);
    }
    else
    {
        da=(95/100.0)*bs;
        hra=(30/100.0)*bs;
        gs=bs+da+hra;
        printf("%.2f",gs);
    }
    
}