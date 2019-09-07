#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long int n;
        cin >> n;

        int b = n % 10;
        int c;
        while (n != 0)
        {
            c = n % 10;
            n = n / 10;
        }
        cout << b + c << endl;
    }
    return 0;
}


#include <iostream>
using namespace std;
int main()
{
    int t, a, b;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        cout << a % b << endl;
    }
    return 0;
}
