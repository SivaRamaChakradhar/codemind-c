#include<stdio.h>
#include<math.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        int n,a;
        scanf("%d",&n);
        a=pow(n,0.5);
        if((a*a)==n){
            printf("True
");
        }
        else{
            printf("False
");
        }
    }  
}