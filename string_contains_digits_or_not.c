#include<stdio.h>
int main()
{
    int n,i,j,f;
    scanf("%d",&n);
    char s[100];
    for(i=0;i<n;i++)
    {
        scanf("%s",s);
        f=0;
        for(j=0;s[j]!=NULL;j++)
        {
            if(s[j]>='0' && s[j]<='9')
            {
                f++;
                break;
            }
        }
        if(f == 0)
        {
            printf("No
");
        }
        else
        {
            printf("Yes
");
        }
    }
}