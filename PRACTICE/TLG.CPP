#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int p1[n], p2[n];

    for (int i = 0; i < n; i++)
    {
        cin >> p1[i];
        cin >> p2[i];
    }
    /*for (int i = 0; i < n; i++)
    {
        cout << p1[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << p2[i] << " ";
    }
    cout << endl;*/
    int sum_p1_i[n];
    int sum_p2_i[n];
    int sum1 = 0;
    int sum2 = 0;
    int p = 0;
    int q = 0;
    

    for (int i = 0; i < n; i++)
    {
        sum1 = sum1 + p1[i];
        sum_p1_i[p++] = sum1;
    }
    for (int i = 0; i < n; i++)
    {
        sum2 = sum2 + p2[i];
        sum_p2_i[q++] = sum2;
    }
    /*for (int i = 0; i < n; i++)
    {
        cout << sum_p1_i[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << sum_p2_i[i] << " ";
    }
    cout << endl;*/

    int max;

    int flag;
    int lead_array[n];

    for (int i = 0; i < n; i++)
    {
        lead_array[i] = sum_p1_i[i] - sum_p2_i[i];
    }
    max = lead_array[0];
        for( int i= 0; i < n; i++)
        {
            if (lead_array[i] >= 0) {
                if (lead_array[i]>max) {
                    max = lead_array[i];
                    flag = 1;
                }
            }
            else if (lead_array[i]<0) {
                lead_array[i] =-lead_array[i];
                if (lead_array[i]>max) {
                    max = lead_array[i];
                    flag = 2;
                }
                
            }
        }
        if (flag==1) {
            cout << flag<< " " << max << endl;
        }
        if (flag==2) {
            cout << flag<< " " << max << endl;
        }
        return 0;
}
