#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main(){
     double a,b,c,d,r1,r2;
     cin>>a>>b>>c;
     d = b*b - (4*a*c);
     r1 = (-b - sqrt(d))/(2*a);
     r2 = (-b + sqrt(d))/(2*a);
     cout<<fixed<<setprecision(6)<<r2<<endl<<r1;
     return 0;
}
