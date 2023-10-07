#include<stdio.h>
int main()
{
    int CP,SP;
    scanf("%d%d",&CP,&SP);
    if(SP>CP)
    {
        printf("Profit");
    }
    else if(CP>SP)
    {
        printf("Loss");
    }
    else
    {
        printf("No Profit and No Loss");
    } 
}