#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int a[5];
        for (int i = 0; i < 5; i++)
        {
            cin >> a[i];
        }
        int count = 0;
        for (int i = 0; i < 5; i++)
        {
            if (a[i] == 1)
            {
                count++;
            }
        }
        if (count == 1)
        {
            cout << "Junior Developer" << endl;
        }
        if (count == 0)
        {
            cout << "Beginner" << endl;
        }
        if (count == 2)
        {
            cout << "Middle Developer" << endl;
        }
        if (count == 3)
        {
            cout << "Senior Developer" << endl;
        }
        if (count == 4)
        {
            cout << "Hacker" << endl;
        }
        if (count == 5)
        {
            cout << "Jeff Dean" << endl;
        }
    }

    return 0;
}
