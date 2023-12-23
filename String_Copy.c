#include<stdio.h>
int main()
{
	char str1[20],str2[20];
	scanf("%[^
]s",str1);
	int i;
	for(i=0;str1[i]!=NULL;i++)
	{
		str2[i]=str1[i];
	}
	printf("%s",str1);
}