#include <iostream>
#include <string>
using namespace std;
int main()
{
    int t, n;
    cin >> t;
    string s;
    int counter1, counter0;
    while (t--)
    {
        cin >> s;
        n = s.length();
        counter0 = 0;
        counter1 = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                counter0++;
            }
            else
                counter1++;
        }
    
    if (counter0 == 1 || counter1 == 1)
    {
        cout << "Yes" << endl;
    }
    else
        cout << "No" << endl;
    }

return 0;
}
