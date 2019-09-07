/*#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int l1, l2;
    int flag;

    while(t--){
        cin >> l1;
        int a[l1];
        for( int i = 0; i < l1; i++)
        {
            cin >> a[i];
        }
        cin >> l2;
        int b[l2];
        for( int i = 0; i < l2; i++)
        {
            cin >> b[i];
        }
        for( int i = 0; i < l1; i++)
        {
            
            if (a[i] != b[0])
            {
                
                continue;
            }
            int k = 0;
            
            if (a[i] == b[k])
            {
                flag = 0;
                while (a[i] == b[k])
                {
                    i++;
                    k++;
                    flag = 1;

                }if(flag==1){
                    cout << "Yes" << endl;
                    break;
                }
                else if(flag==0){
                    continue;
                }
            }
                }if(flag!=1){
                    cout << "No" << endl;
                    break;
                }
    }

    return 0;

}*/

#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int n = s.length();
    if (n == 1)
    {
        cout << "1" << endl;
    }
    if (n == 2)
    {
        cout << "2" << endl;
    }
    if (n == 3)
        {
            cout << "3" << endl;
        }
        if (n >= 4)
        {
            cout << "More than 3 digits" << endl;
        }
        return 0;
    }
