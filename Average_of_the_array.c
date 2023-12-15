#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int avg[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&avg[i]);
    }
    float sum=0;
    for(i=0;i<n;i++)
    {
        sum=sum+avg[i];
    }
    float average=sum/n;
    printf("%.2f",average);
}