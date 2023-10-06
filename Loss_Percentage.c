#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    float loss,loss_percentage;
    loss=x-y;
    loss_percentage=(loss/x)*100;
    printf("%.2f",loss_percentage);
    
}