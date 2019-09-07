#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;

    cin>>t;

    for(int i=0;i<t;i++)
    {
    int n,sum=0;
    cin>>n;
    int v;
    for(int i=0;i<n;i++)
    {
    cin>>v;

    sum+=v;

    }

    if(sum%2!=0)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;


    }

}
