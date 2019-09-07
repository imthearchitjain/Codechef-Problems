#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    
    int n;
    cin>>n;
    
    long long a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    int pos=0;
    for(int i=n-2;i>=0;i--)
    {
        if(a[i]!=a[n-1])
        {
            pos=i;
            break;
        }
    }
    
    cout<<a[pos]%a[n-1];
    
   return 0;
}
