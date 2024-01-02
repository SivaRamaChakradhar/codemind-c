#include<stdio.h>
int main()
{
    int a,b=0,c,i,j;
    char str[1000];
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        scanf("%s",&str);
        for(j=0;str[j]!=NULL;j++)
        {
            if(str[j]=='+' && str[j+1]=='+')
            {
                b++;
            }
            else if(str[j]=='-' && str[j+1]=='-')
            {
                b--;
            }
        }
    }
    printf("%d",b);
}