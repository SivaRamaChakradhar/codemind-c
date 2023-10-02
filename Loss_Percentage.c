#include<stdio.h>
int main()
{
    int X,Y;
    scanf("%d%d",&X,&Y);
    float loss,loss_percentage;
    loss=X-Y;
    loss_percentage=(loss/X)*100.0;
    printf("%.2f",loss_percentage);
    
    
}