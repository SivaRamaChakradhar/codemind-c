#include<stdio.h>
int main()
{
    int a,b,i,c,d;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        c = i;
        d = 1;
        if(i>0)
        {
            while(c>0 && d==1)
            {
                if(((c%10) == 0) || (i%(c%10) != 0))   
                {
                    d=0;
                }
                else
                {
                    c=c/10;
                }
            }
        } 
        else
        {
            d=0;
        }
        if(d==1)
        {
            printf("%d ",i);
        }
    }
    return 0;
    
}