#include<stdio.h>
int main()
{
    int E,M,P,C,CS;
    scanf("%d%d%d%d%d",&E,&M,&P,&C,&CS);
    if ((E>34) and (M>34) and (P>34) and (C>34) and (CS>34))
    {
    printf("PASSED");
    }
    else
    {
    printf("FAILED");
    }
}