#include<stdio.h>
int main()
{
    int N,i,s=0;
    scanf("%d",&N);
    int even_sum[N];
    for(i=0;i<N;i++)
    {
        scanf("%d",&even_sum[i]);
    }
    for(i=0;i<N;i++)
    {
        if(even_sum[i]%2 == 0)
        {
            s=s+even_sum[i];
        }
    }
    printf("%d",s);
}