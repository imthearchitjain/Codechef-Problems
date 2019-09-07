#include<iostream>
using namespace std;
int main(){




ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        if (x % 10 == 0)
        {
            cout << 0 << '\n';
        }
        else if (x % 5 == 0)
        {
            cout << 1 << '\n';
        }
        else
        {
            cout << -1 << '\n';
        }
    }
    return 0;
}
