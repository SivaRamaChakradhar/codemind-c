#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,j=0;
    scanf("%d",&n);
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            j++;
            break;
        }
    }
    if(j == 1)
    {
        printf("%d %d",i,n/i);
    }
    else
    {
        printf("-1");
    }
}