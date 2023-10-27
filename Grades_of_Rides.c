#include<stdio.h>
int main()
{
    int hurlfactor,spinfactor,speedfactor;
    scanf("%d%d%d",&hurlfactor,&spinfactor,&speedfactor);
    if(hurlfactor>50 && spinfactor>60 && speedfactor>100)
    {
        printf("10");
    }
    else if(hurlfactor>50 && spinfactor>60)
    {
        printf("9");
    }
    else if(spinfactor>60 && speedfactor>100)
    {
        printf("8");
    }
    else if(hurlfactor>50 && speedfactor>100)
    {
        printf("7");
    }
    else if(hurlfactor>50 || spinfactor>60 || speedfactor>100)
    {
        printf("6");
    }
    else
    {
        printf("5");
    }
}