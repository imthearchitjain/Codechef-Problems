#include <stdio.h>
 
int main() {
	
	int tc,i,a,c,j;
	float b;
	scanf("%d",&tc);
	for(i=0;i<tc;i++)
	{
		scanf("%d",&a);
		scanf("%f",&b);
		scanf("%d",&c);
	//	printf(" a=%d b=%f and c=%d \n",a,b,c);
		if(a>50 && b<0.7 && c>5600)
		printf("10\n");
		else if(a>50 && b<0.7)
		printf("9\n");
		else if(b<0.7 && c>5600)
		printf("8\n");
		else if(a>50 && c>5600)
		printf("7\n");
		else if(a>50 || b<0.7 || c>5600)
		printf("6\n");
		else 
		printf("5\n");
		
	}	
return 0;
}
