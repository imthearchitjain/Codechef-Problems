#include<iostream>
using namespace std;
int main()
{

	int a,b;
	cin>>a>>b;
	int c=a-b;
	if(c%10!=9)
		c++;
	else{
	c=c-1;
		

}

	cout<<c;
}
