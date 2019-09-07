#include <iostream>
#include <string>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int l1, l2;
    string s1, s2;
    int flag;
    while (t--)
    {

        cin >> s1 >> s2;
        flag = 0;
        l1 = s1.length();
        l2 = s2.length();
        for (int i = 0; i < l1; i++)
        {
            if (s1[i] == s2[i])
            {
                
                continue;
            }
            else if (s1[i] == '?' && s2[i]!='?')
            {
                
                continue;
            }
            else if (s2[i] == '?' && s1[i] !='?')
            {
                
                continue;
            }
            else
                flag = 1;
                
        }
        if (flag == 0)
        {
            cout << "Yes" << endl;
        }
        if (flag==1) {
            cout << "No" << endl;
        }
    }

    return 0;
}
