#include<stdio.h>
int main()
{
    char s[1000];
    scanf("%[^
]s",s);
    int i,a=1;
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]==' ')
        {
            a++;
            continue;
        }
    }
    printf("%d",a);
}