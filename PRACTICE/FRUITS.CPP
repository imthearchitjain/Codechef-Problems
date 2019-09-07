#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int n, m, k;
    
    while (t--)
    { 
           cin >> n >> m>>k;
            if (n==m) {
                cout << "0" << endl;
            }
            if(n>m){
                if (k>=n-m) {
                    cout << "0" << endl;
                }
                else if(k<n-m){
                    n = n - k;
                    cout << n - m<<endl;
                }
            }
             if(m>n){
                if (k>=m-n) {
                    cout << "0" << endl;
                }
                else if(k<m-n){
                    m = m - k;
                    cout << m - n<<endl;
                }
            }
            
    }
            return 0;
}
