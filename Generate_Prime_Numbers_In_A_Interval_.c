#include<stdio.h>
int main()
{
    int a,b,c=0,d,i,j;
    scanf("%d%d",&a,&b);
    for(i=a+1;i<=b;i++)
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
            printf("%d
",i);
        }
    }
}