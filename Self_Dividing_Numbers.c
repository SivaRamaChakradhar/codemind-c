#include<stdio.h>
int self(int);
int main()
{
    int a,b,i,flag=1,r,t;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        flag=1;
        t=i;
        while(t != 0)
        {
            r=t%10;
            if(r == 0 || i%r != 0)
            {
                flag=0;
            }
            t/=10;
        }
        if(flag==1)
        {
            printf("%d ",i);
        }
    }
}