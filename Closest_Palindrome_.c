#include<stdio.h>
int main()
{
	int a,i,n,rem,r,c=0,np,bp;
	scanf("%d",&a);
	for(i=a+1;;i++)
	{
		n=i;
		r=0;
		while(n)
		{
		    rem=n%10;
			n=n/10;
			r=r*10+rem;	
		}
		if(i == r)
		{
			np=i;
			break;
		}
	}
	for(i=a-1;;i--)
	{
		n=i;
		r=0;
		while(n)
		{
		    rem=n%10;
			n=n/10;
			r=r*10+rem;	
		}
		if(i == r)
		{
			bp=i;
			break;
		}
	}
	if(np-a>a-bp)
	{
	    printf("%d ",bp);
	}
	else if(np-a<a-bp)
	{
	    printf("%d ",np);
	}
	else
	{
	    printf("%d %d",bp,np);
	}
}