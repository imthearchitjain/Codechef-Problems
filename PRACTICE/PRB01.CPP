#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int n;
    int x;
    while (t--)
    {
        cin >> n;
        x = 0;
        for (int i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                x++;
            }
        }
        if (x == 2)
        {
            cout << "yes" << endl;
        }
        else
            cout << "no" << endl;
    }

    return 0;
}