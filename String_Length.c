#include<stdio.h>
int main()
{
    char str[20];
    int i,length=0;
    scanf("%[^
]s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        length+=1;
    }
    printf("%d",length);
}