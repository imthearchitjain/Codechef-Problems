#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    long int n;
    while (t--)
    {
        cin >> n;
        int count = 0;
        while (n >= 2048)
        {
            n = n - 2048;
            count++;
        }
        while (n >= 1024)
        {
            n = n - 1024;
            count++;
        }
        while (n >= 512)
        {
            n = n - 512;
            count++;
        }
        while (n >= 256)
        {
            n = n - 256;
            count++;
        }
        while (n >= 128)
        {
            n = n - 128;
            count++;
        }
        while (n >= 64)
        {
            n = n - 64;
            count++;
        }
        while (n >= 32)
        {
            n = n - 32;
            count++;
        }
        while (n >= 16)
        {
            n = n - 16;
            count++;
        }
        while (n >= 8)
        {
            n = n - 8;
            count++;
        }
        while (n >= 4)
        {
            n = n - 4;
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