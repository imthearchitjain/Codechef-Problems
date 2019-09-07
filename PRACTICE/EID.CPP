#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    int min=0;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    sort(arr,arr+n);
	    min=arr[1]-arr[0];
	    for(int i=2;i<n;i++)
	    {
	        int x=arr[i]-arr[i-1];
	        if(min>x)
	        min=x;
	    }
	    cout<<min<<endl;
	}
	return 0;
}
