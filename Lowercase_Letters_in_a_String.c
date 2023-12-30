#include<stdio.h>
int main()
{
    char s[100];
    scanf("%[^
]s",s);
    int i,c=0;
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            c++;
        }
    }
    printf("%d",c);
}