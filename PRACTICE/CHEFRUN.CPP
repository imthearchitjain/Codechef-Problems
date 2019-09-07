#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		double x1,x2,x3,v1,v2,t1,t2;
		cin>>x1>>x2>>x3>>v1>>v2;
		if(x3>x1)
	     t1=(x3-x1)/v1;
		if(x3<=x1)
	     t1=(x1-x3)/v1;
		if(x3>x2)
	     t2=(x3-x2)/v2;
		if(x2>=x3)
		 t2=(x2-x3)/v2;
		if(t1>t2)
		 cout<<"Kefa"<<endl;
		if(t1<t2)
		 cout<<"Chef"<<endl;
		if(t1==t2)
		 cout<<"Draw"<<endl;
		
	}
}
