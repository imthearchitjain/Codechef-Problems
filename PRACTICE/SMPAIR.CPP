#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    long int t;
    cin >> t;
    long int n;
    while (t--)
    {
        cin >> n;
        long int a[n];
        for (long int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        cout << a[0] + a[1] << endl;
    }

    return 0;
}