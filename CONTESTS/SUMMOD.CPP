#include <iostream>
using namespace std;
#define k 1000000007
int main()
{
    int t;
    cin>>t;

    int n;
    long long sum;
    long long f;
    while(t--)
    {
        sum = 0;
        cin >> n;
        sum = 1;
        f = 1;
        for (int i = 2; i <= n;i++)
        {
            f = (f * i) % k;
            sum += f;
        }
        sum = sum % k;
        cout << sum << endl;
    }
}
