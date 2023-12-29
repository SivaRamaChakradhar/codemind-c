#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000];
    int i,a=0;
    scanf("%[^
]s",s);
    for(i=0;i<=strlen(s);i++){
        if((s[i]=='1') or (s[i]=='2') or (s[i]=='3') or (s[i]=='4') or (s[i]=='5') or (s[i]=='6') or (s[i]=='7') or (s[i]=='8') or (s[i]=='9')){
            a+=s[i]-'0';
        }
    }
    printf("%d",a);
}