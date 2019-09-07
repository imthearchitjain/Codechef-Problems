#include <iostream>
using namespace std;

int main() {
	int t,n,s,j,c;
	cin>>t;
	while(t--)
	{
	    c=0;
	    cin>>n;
	    for(int i=0;i<n;i++)
	    {
	        cin>>s>>j;
	        if((j-s)>5)
	        c++;
	    }
	    cout<<c<<endl;
	}
	return 0;
}
