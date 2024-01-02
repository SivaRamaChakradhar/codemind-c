#include<stdio.h>
int main()
{
    char s[10000];
    scanf("%[^
]s",s);
    int c=1,i;
    for(i=1;s[i]!=NULL;i++)
    {
        if(s[i]>=65 && s[i]<=91)
        {
            c++;
        }
    }
   printf("%d",c);
}