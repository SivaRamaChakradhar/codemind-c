#include<stdio.h>
int main(){
    int a,b,i;
    scanf("%d%d",&a,&b);
        for(i=b;i>=1;i--){
            if(a%i==0 && b%i==0){
                printf("%d",i);
                break;
            }
        }
}