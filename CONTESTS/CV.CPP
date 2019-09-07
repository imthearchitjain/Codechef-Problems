#include<iostream>
#include<string>
using namespace std;
bool isvowel(char c)
{
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        return 1;
    return 0;
}
int main()
{
    int t;
    string s;
    cin >> t;
    int n;
    while (t--)
    {
        cin >> n;
        cin>>s;
        int c = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (!isvowel(s[i]) && isvowel(s[i + 1]))
            {
                c++;
                i++;
            }
        }
        cout << c << endl;
    }
}

