#include<iostream>
using namespace std;
unsigned long long int fac(int n)
{
    unsigned long long fac=1;
    while(n)
    {
        fac*=n--;
    }
    return fac;
}
int main()
{
    int t;
    cin>>t;
    int n;
    while(t--)
    {
        cin>>n;
        cout<<fac(n)<<"\n";
    }
}

