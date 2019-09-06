#include<bits/stdc++.h>
using namespace std;

int check(int a, int b, int c, int d)
{
    if (c == d && a == b)
        return 1;
    if(c > d && a > b)
        return 1;
    if(c < d && a < b)
        return 1;
    
    return 0;
}

int main()
{
    int n;
    int a1, a2, a3, c1, c2, c3;
    cin>> n;
    while(n--)
    {
        cin >> a1;
        cin >> a2;
        cin >> a3;
        cin >> c1 >> c2 >> c3;
        int ans= 1;
        ans *= check(a1, a2, c1, c2);
        ans *= check(a2, a3, c2, c3);
        ans *= check(a3, a1, c3, c1);
        if(ans == 1)
            cout << "FAIR" << endl;
        else
        {
            cout << "NOT FAIR" << endl;
        }
        
    }
}
