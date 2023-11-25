#include<stdio.h>
int main()
{
    int n,i,j,c=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i == 0)
        {
            for(j=2;j<i;j++)
            {
                if(i%j == 0)
                {
                    c++;
                    break;
                }
            } 
        }
    }
       printf("%d",c+1); 
}