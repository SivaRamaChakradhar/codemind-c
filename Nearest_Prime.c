#include<stdio.h>
int main()
{
	int n,i,j,k,t,c=0,bp,np;
	scanf("%d",&t);
	for(k=1;k<=t;k++)
	{
    	scanf("%d",&n);
    	int p=n;
    	for(i=n;;i++)
    	{
    		c=0;
    		for(j=1;j<=i;j++)
    		{
    			if(i%j==0)
    			{
    				c++;
    			}
    		}
    		if(c == 2)
    		{
    			np=i;
    			break;
    		}
    	}
    	for(i=n;;i--)
    	{
    		c=0;
    		for(j=1;j<=i;j++)
    		{
    			if(i%j==0)
    			{
    				c++;
    			}
    		}
    		if(c == 2)
    		{
    			bp=i;
    			break;
    		}
    	}
    	if(np-n<n-bp)
    	{
    		printf("%d
",np);
    	}
    	else if(np-n>n-bp)
    	{
    		printf("%d
",bp);
    	}
    	else
    	{
    		printf("%d
",bp);
    	}
	}
}