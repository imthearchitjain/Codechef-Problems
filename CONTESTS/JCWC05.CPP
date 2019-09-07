#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    long long int n;
    float prob;
    while(t--)
    {
        cin >> n;

        if (n == 1)
            prob = 3.0 / 7.0;
        else if (n == 2)
            prob = 4.0 / 7.0;
        else if (n == 3)
            prob = 5.0 / 7.0;
        else if (n == 4)
            prob = 6.0 / 7.0;
        else
        {
            cout << "1.000000" << endl;
            continue;
        }
        cout << prob << endl;
        
        
    }
}
