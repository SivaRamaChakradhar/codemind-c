#include<stdio.h>
int main()
{
    int t,n1,m1,k1,n2,m2,k2;
    scanf("%d",&t);
    scanf("%d%d%d",&n1,&m1,&k1);
    scanf("%d%d%d",&n2,&m2,&k2);
    if(m1-k1>=n1)
    {
        printf("YES
");
    }
    else
    {
       printf("NO
"); 
    }
    if(m2-k2>=n2)
    {
        printf("YES");
    }
    else
    {
       printf("NO"); 
    }
}