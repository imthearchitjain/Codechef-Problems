#include <iostream>
using namespace std;
int main()
{
    long int t;
    cin >> t;
    long int n;
    while (t--)
    {
        cin >> n;
        int count = 0;
        while (n != 0)
        {
            if (n % 10 == 4)
            {
                count++;
            }
            n = n / 10;
        }
        cout << count << endl;
    }

    return 0;
}