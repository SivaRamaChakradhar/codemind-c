#include<stdio.h>
int main()
{
    int p,c,b,m,cs,percentage;
    scanf("%d%d%d%d%d",&p,&c,&b,&m,&cs);
    percentage=((p+c+b+m+cs)/5);
   
    if(percentage>=90)
    {
        printf("Grade A");
    }
    else if(percentage>=80)
    {
        printf("Grade B");
    }
    else if(percentage>=70)
    {
        printf("Grade C");
    }
    else if(percentage>=60)
    {
        printf("Grade D");
    }
    else if(percentage>=40)
    {
        printf("Grade E");
    }
    else 
    {
        printf("Grade F");
    }
}