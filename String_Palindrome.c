#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100],s2[100];
    scanf(" %[^
]s",s1);
    strcpy(s2,s1);
    int i=0;
	int j=strlen(s1)-1;//4
	while(i<=j)//0<=4
	{
		int t=s1[i];//ma
		s1[i]=s1[j];//ma
		s1[j]=t;//ma
		i++;
		j--;
	}
    if(strcmp(s1,s2)==0)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
}