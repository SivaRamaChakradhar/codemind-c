#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g=-1;
    scanf("%d",&a);
    b=a;
    while(b!=0)
    {
        c=b%10;
        b=b/10;
        d=c;
        e=a;
        g=-1;
        while(e!=0)
        {
            f=e%10;
            e=e/10;
            if(d==f)
            {
                g++; 
                if(g>=1)
                {
                    break;
                }
            }
        }
        if(g>=1)
        {
            break;
        }
    }
   
    if(g>=1)
    {
        printf("Not Unique Number");
    }
    else
    {
        printf("Unique Number");
    }
}