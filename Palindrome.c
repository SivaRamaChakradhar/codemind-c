#include<stdio.h>
int main()
{
    int n,i,s=0,z;
    scanf("%d",&n);
    z=n;
    while(n!=0)
    {
//i=n%10;
        s=s*10+(n%10);
        n=n/10;
    }
    if(z==s)
    {
       printf("True"); 
    }
    else{
        printf("False");
    }
}
   