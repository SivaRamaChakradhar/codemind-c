#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a+b>c+b & a+b>c+a){
        printf("%d",a+b);
    }
    else if(a+c>a+b & a+c>b+c){
        printf("%d",a+c);
    }
    else{
        printf("%d",b+c);
    }
}