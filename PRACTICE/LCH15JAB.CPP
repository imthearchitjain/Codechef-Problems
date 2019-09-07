#include <iostream>
#include <string>
using namespace std;
int main()
{
    int t;
    cin >> t;
    string s;
    int count, n,flag;

    while (t--)
    {
        cin >> s;
        n = s.length();
      
        for (int i = 0; i < n; i++)
        {
            count = 0;
            flag = 0;
            for (int j = 0; j < n; j++)
            {
                if (s[i] == s[j])
                {
                    count++;
                }
               
            } if (count == n - count)
                {
                    cout << "YES" << endl;
                    flag = 1;
                    break;
                }
        }if(flag!=1){
            cout << "NO" << endl;
        }
    }
    return 0;
}
