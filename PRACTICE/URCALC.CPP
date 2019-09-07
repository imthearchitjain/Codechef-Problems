#include <iostream>
#include<iomanip>
using namespace std;

int main() {
	// your code goes here
	double A,B;
	char c;
	cin>>A>>B;
	cin>>c;
	if(c=='+')
	    cout<<fixed<<setprecision(6)<<A+B;
	else if(c=='-')
	    cout<<fixed<<setprecision(6)<<A-B;
	else if(c=='*')
	    cout<<fixed<<setprecision(6)<<A*B;
    else if(c=='/')
	    cout<<fixed<<setprecision(6)<<A/B;
	return 0;
}
