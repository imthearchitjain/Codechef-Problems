#include<stdio.h>
int main()
{
    int p;
    float t;
  	scanf("%d%f",&p,&t);
   	if(p+0.5>t)
   	{
   		printf("%.2f",t);
   	}
   	else if(p%5!=0)
   	    printf("%.2f",t);
   	else
  	    printf("%.2f",t-p-0.5);

    return 0 ;
}
