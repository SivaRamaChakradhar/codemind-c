#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,e=0,o=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(i%2 == 0)
        {
            e+=a[i];
        }
        else
        {
            o+=a[i];
        }
    }
    printf("%d",abs(e-o));
}