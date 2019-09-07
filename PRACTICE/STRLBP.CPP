#include <iostream>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin>>s;

        int l = s.length();
        int count = 0;
        if (s[0] != s[l - 1])
        {
            count = 1;
        }
        for (int i = 0; i < l; i++)
        {

            if (s[i] == '0')
            {
                if (s[i + 1] == '1')
                {
                    count++;
                }
                else if (s[i + 1] == '0')
                {

                    continue;
                }
            }
            if (s[i] == '1')
            {
                if (s[i + 1] == '0')
                {
                    count++;
                }
                else if (s[i + 1] == '1')
                {

                    continue;
                }
            }
        }if(count<=2){
            cout<<"uniform"<<endl;
        }
        else cout<<"non-uniform"<<endl;
    }

    return 0;
}
