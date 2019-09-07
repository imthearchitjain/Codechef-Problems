#include <bits/stdc++.h> 
using namespace std;
typedef double ll;

void func()
{
    ll s,h,d;
    cin>>s;
    if(s<1500)
    {
        h=0.1*s;
        d=0.9*s;
    }
    else
    {
        h=500;
        d=0.98*s;
    }
    std::cout <<fixed<<setprecision(2)<< s+h+d << std::endl;
}
int main()
{
    ll T;
    cin>>T;
    while(T--)
        func();
    return 0;
}
