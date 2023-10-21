#include <stdio.h>
int main()
{
    int x,y;
    scanf("%d %d", &x,&y);
    int z=2*y;
    if(x==0 && y%2==0)
    { printf("YES");
    }
    else if(x==0 && y%2!=0){ 
        printf("NO");
    }
    else if (y==0 && x%2==0){
        printf("YES");
    } 
    else if(x%2!=0 && y%2!=0){
        printf("NO");
    
    }
    else if((x+z)%2==0){
    printf("YES");
    }
    else{
        printf("NO");
    }
}