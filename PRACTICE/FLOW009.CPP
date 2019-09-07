#include <stdio.h>

int main(void) 
{
	int t;
	float e,z,p,q;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%f%f",&q,&p);
	      e=p*q;
	    if(q>1000)
	    {
	      
	        printf("%f\n",(0.9*p*q));
	    }
	    else
	    {
	      
	        printf("%f\n",e);
	    }
	}
	return 0;
}
