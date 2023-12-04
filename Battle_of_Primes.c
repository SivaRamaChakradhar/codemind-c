#include<stdio.h>
int main()
{
    int n1,n2,i,j,n3,c=0,a;
    scanf("%d%d",&n1,&n2);
    a=n1+n2;
    for(i=a+1;i<=10000;i++)
    {
        c=0;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                c++;
                break;
            }
        }
        if(c==0)
        {
            n3=i;
            break;
        }
    }
    n3=n3-a;
    printf("%d",n3);
}