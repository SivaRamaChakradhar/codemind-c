#include<stdio.h>
int main()
{
    char s[1000],c;
    scanf("%[^
]s",s);
    scanf("%s",&c);
    int i,d=0;
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]==c)
        {
            d++;
        }
    }
    if(d==0)
    {
        printf("-1");
    }
    else
    {
        printf("%d",d);
    }
}
