#include <iostream>
#include <string>
using namespace std;
int main()
{
    int t, n, flag, x, y, a, b,i;
    cin >> t;

    string s;
    int counter_chef, counter;
    while (t--)
    {
        cin >> s;
        n = s.length();
        counter_chef = 0;
        counter = 0;
        x = 0;
        y = 0;
        i = 0;
        for( int i = 0; i < 20; i++)
        {
            
            if (s[i]=='1') {
                counter_chef++;
            }
            else if(s[i]=='0'){
                counter++;
            }
            if(counter==11){
                cout << "LOSE" << endl;
                break;
            }
            else if(counter_chef==11){
                cout << "WIN" << endl;
                break;
            if(i==19){
                if(counter==10 && counter_chef==10){
                    break;
                }
            }
            }
                }
        
        if (counter == 10 && counter_chef == 10)
        {
            for (int j = 20; j < n; j++)
            {
                 if (s[j] == '1')
                {
                    counter_chef++;
                    x++;
                }
                if (s[j] == '0')
                {
                    counter++;
                    y++;
                }
                if(counter_chef==counter){
                    x = 0;
                    y = 0;
                }
                if (x == 2)
                {
                    cout << "WIN" << endl;
                    break;
                }
                else if (y == 2)
                {
                    cout << "LOSE" << endl;
                    break;
                }
               /* if (s[j] == '0')
                {
                    counter++;
                }
                else if (s[j] == '1')
                {
                    counter_chef++;
                }
                if (counter - counter_chef == 2)
                {
                    cout << "LOSE" << endl;
                    break;
                }
                else if (counter_chef - counter == 2)
                {
                    cout << "WIN" << endl;
                    break;
                }*/
            }
        }
    }

    return 0;
}
