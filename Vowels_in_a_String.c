#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000];
    char vowel;
    int i,f=0;
    scanf("%[^
]s",s);
    scanf(" %c",&vowel);
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]==vowel)
        {
            f=i;
            break;
        }
    }
    if(f==0)
    {
        printf("False");
    }
    else
    {
        printf("True
%d
",f);
    }
}