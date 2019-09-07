#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int a, b, c, d;
    while(t--){
        cin >> a >> b >> c >> d;
        if(b==d && c>a){
            cout << "right" << endl;
        }
        else if (b==d && c<a) {
            cout << "left" << endl;
        }
         else if(a==c && b>d){
            cout << "down" << endl;
        }
         else if(a==c && d>b){
            cout << "up" << endl;
        }
        else
            cout << "sad" << endl;
    }

    return 0;
}
