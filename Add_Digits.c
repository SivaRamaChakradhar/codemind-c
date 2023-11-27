#include<stdio.h>
int main(){
    int a,s=0;
    scanf("%d",&a);
    while(a!=0)
    {
        s+=a%10;
        a/=10;
        if((a==0)&&(s>9)){
            a=s;
            s=0;
        }
    }
    printf("%d",s);
}