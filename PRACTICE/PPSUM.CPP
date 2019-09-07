#include <iostream>
#include<string>
using namespace std;
int sum(int n){
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    return sum;
}
int main()
{
    int t;
    cin >> t;
    int d, n,x;
    while (t--)
    {
        cin >> d >> n;

        for (int i = 1; i <= d; i++){
             x = sum(n);
             n = x;
        }
        cout << x << endl;
    }
    return 0;
}
