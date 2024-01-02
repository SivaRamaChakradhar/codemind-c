#include<stdio.h>
int main()
{
    char s[1000],m=NULL;
    scanf(" %[^
]s",s);
    int i;
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]>m)
        {
            m=s[i];
        }
    }
    printf("%c",m);
}