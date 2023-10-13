#include<stdio.h>
int main()
{
    int S1,S2,S3;
    scanf("%d%d%d",&S1,&S2,&S3);
    if((S1+S2>S3) && (S1+S3>S2) && (S2+S3>S1))
    {
        printf("Valid triangle");
    }
    else
    {
        printf("Invalid triangle");
    }
}