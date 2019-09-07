#include <iostream>
#include <string>
using namespace std;
int main()
{
    int t, n;
    string s;
    cin >> t;
    int counterA,counterB,counter_a,counter_b;
    while (t--)
    {
        cin >> s;
        n = s.length();
        
        counter_a = 0;
         counter_b=0;
       
                for( int i = 0; i < n; i++)
                {
                    if (s[i]=='a') {
                        counter_a++;
                    }
                    else if(s[i]=='b'){
                        counter_b++;
                    }
                                }
                                cout << min(counter_a, counter_b) << endl;
    }

    return 0;
}
