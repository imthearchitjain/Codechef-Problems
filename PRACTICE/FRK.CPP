#include <iostream>
using namespace std;

int main() {
	int t,count=0;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    int i,flag=0;
	    for(i=0;i<s.size()-1;i++)
	    {
	        if((s[i]=='c' && s[i+1]=='h') || (s[i]=='h' && s[i+1]=='e')  ||
	        (s[i]=='e' && s[i+1]=='f'))
	        {
	            flag=1;
	            break;
	        }
	    }
	    if(flag==1)
	    {
	        count++;
	    }
	}
	cout<<count<<endl;
	return 0;
}

