#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n ,k,d;
	    cin>>n>>k;
	    vector<long int>v;
	    for(int i=0;i<n;i++)
	   {
	       cin>>d;
	       v.push_back(d);
	   }
	   long long int sum=accumulate(v.begin(),v.end(),0);
	   while(k--){
	   v.push_back(sum + 1);
	   sum += sum +1;    
	   }
	   
	   int l=v[v.size() - 1];
	   if(l%2==1){
	       cout<<"odd"<<endl;
	   }
	    if(l%2==0){
	       cout<<"even"<<endl;
	   }
	}
	return 0;
}
