#include<stdio.h>
int main()
{
    char s[1000];
    int i,a=0;
    scanf("%[^
]s",s);
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]>'0' && s[i]<='9')
        {
            a+=s[i]-'0';
        }
    }
    printf("%d",a);
}