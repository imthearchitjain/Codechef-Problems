#include<iostream>
using namespace std;
int main()
{
    int t;
    long long int n, k;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        if(n/ k < k)
            cout << "YES" << endl;
        else if((n/k)%k == 0)
            cout << "NO" << endl;
        else
        {
            cout << "YES"<<endl;
        }
      /*  else{
            long long int count = 0;
            long long int  x = n;
            while(n > 0){
            n = n -  k*k;
            count = count + k;
            if( count > x/k)
            {
                 cout << "YES" << endl;
                break;
            }
            
        }*/
        
        }
}
