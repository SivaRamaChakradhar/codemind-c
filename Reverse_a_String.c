#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000];
    scanf("%[^
]s",s);
    int i=0,k;
    int j=strlen(s)-1;
    while(i<=j)
    {
        k=s[i];
        s[i]=s[j];
        s[j]=k;
        i++;
        j--;
    }
    printf("%s",s);
}