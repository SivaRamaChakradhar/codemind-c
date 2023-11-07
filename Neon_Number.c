#include<stdio.h>
int main()
{
    int n,s,u,p=0;
    scanf("%d",&n);
    s=n*n;
    while(s!=0)
    {
        u=s%10;
        p=p+u;
        s=s/10;
    }
    if(p==n){
        printf("Neon Number");
    }
    else{
        printf("Not Neon Number");
    }
}