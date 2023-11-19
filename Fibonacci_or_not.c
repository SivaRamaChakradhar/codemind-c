#include<stdio.h>
int main(){
    int a=0,b=1,c,n;
    scanf("%d",&n);
    while(b<n){
        c=b;
        b+=a;
        a=c;
    }
    if(n==b){
        printf("True");
    }
    else{
        printf("False");
    }
}