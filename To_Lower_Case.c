#include<stdio.h>
int main()
{
    char s[20];
    scanf("%[^
]s",s);
    int i;
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            s[i]=s[i]+32;
        }
    }
    printf("%s",s);
}