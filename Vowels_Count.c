#include<stdio.h>
int main()
{
    char s[100];
    scanf(" %[^/n]s",s);
    int i,c=0;
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
        {
            c++;
        }
    }
    printf("%d",c);
}