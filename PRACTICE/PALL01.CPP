#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    string n;
    string rev;

    for (int i = 0; i < t; i++)
    {
        cin >> n;
        rev = "";
        int x = n.length();
        for (int i = x - 1; i >= 0; i--)
        {
            rev = rev + n[i];
        }
        if (n == rev)
        {
            cout << "wins" << endl;
        }
        if (n != rev)
        {
            cout << "losses" << endl;
        }
    }

    return 0;
}