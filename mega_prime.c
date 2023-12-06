#include<stdio.h>
int main()
{
    int n,a,b,c=0,d=0,e,f=0,g=0,h=0,i,j;
    scanf("%d",&n);
    b=n;
    for(j=2;j<n;j++)
    {
        if(n%j==0)
        {
            c++;
            break;
        }
    }
    if(c==0)
    {
        d=0;
        while(b!=0)
        {
            e=b%10;
            if(e==1)
            {
                h++;
                break;
            }
            for(i=2;i<e;i++)
            {
                if(e%i==0)
                {
                    d++;
                }
            }
            b/=10;
        }
    }
    if(c!=0||h==1||d!=0)
    {
        printf("Not Mega Prime");
    }
    else if(d==0&&h!=1)
    {
        printf("Mega Prime");
    }
}
            