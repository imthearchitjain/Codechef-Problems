#include <bits/stdc++.h>
using namespace std;
// Driver Program
int main()
{
    int t;
    cin >> t;
    int w;
    int n, m, k, l, r;
    while (t--)
    {
        cin >> n >> m >> k >> l >> r;
        int a[n], b[n];
        w = INT_MAX;
        for (int i = 0; i < n; i++)
            cin >> a[i] >> b[i];

        for (int i = 0; i < n; i++)
        {
            if (a[i] < k - 1)
            {
                if (a[i] + m <= k - 1)
                {
                    if (a[i] + m >= l && a[i] + m <= r)
                        if (w > b[i])
                            w = b[i];
                }
                else if (k >= l && k <= r)
                    if (w > b[i])
                        w = b[i];
            }
            else if (a[i] > k + 1)
            {
                if (a[i] - m >= k + 1)
                {
                    if (a[i] - m >= l && a[i] - m <= r)
                        if (w > b[i])
                            w = b[i];
                }
                else if (k >= l && k <= r)
                    if (w > b[i])
                        w = b[i];
            }
            else 
                if (k >= l && k <= r)
                    if (w > b[i])
                        w = b[i];
        }
        if (w == INT_MAX)
            cout << -1 << endl;
        else
            cout << w << endl;
    }
}

