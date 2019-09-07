#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n,c;
        cin>>n>>c;
        int a[n];
        for ( int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        int sum=0;
        for ( int i = 0; i < n; i++)
        {
            sum=sum+a[i];
        }
        if(sum>c){
            cout<<"No"<<endl;
        }
        if(sum<=c){
            cout<<"Yes"<<endl;
        }
        
    }
    
    return 0;
}
