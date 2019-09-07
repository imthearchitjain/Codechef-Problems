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
        int count = 0;
        while (n >= 100)
        {
            n = n - 100;
            count++;
        }
        while (n >= 50)
        {
            n = n - 50;
            count++;
        }
        while (n >= 10)
        {
            n = n - 10;
            count++;
        }
        while (n >= 5)
        {
            n = n - 5;
            count++;
        }
        while (n >= 2)
        {
            n = n - 2;
            count++;
        }
        while (n >= 1)
        {
            n = n - 1;
            count++;
        }
        cout << count << endl;
    }

    return 0;
}