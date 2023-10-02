#include<stdio.h>
int main()
{
    int T,S,B,capacity;
    scanf("%d%d%d",&T,&S,&B);
    capacity=(2*T*S*B*512)/1024;
    printf("%d KB",capacity);
}