#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;cin>>t;
    while(t--){
       int n,x;cin>>n>>x;
       int arr[n];
       for(int i=0;i<n;i++)
       cin>>arr[i];
       int f=0;
       for(int i=0;i<n;i++){
           if(arr[i]>=x)
           f=1;
       }
        if(f==0)
        cout<<"NO\n";
        else
        cout<<"YES\n";
    }
	return 0;
}
