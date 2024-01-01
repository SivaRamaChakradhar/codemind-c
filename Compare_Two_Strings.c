#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100],s2[100];
    scanf("%[^
]s",s1);
    scanf(" %[^
]s",s2);
    int a=strcmp(s1,s2);
    if(a==0)
    {
        printf("Strings are Equal");
    }
    else
    {
        printf("Strings are not Equal");
    }
}