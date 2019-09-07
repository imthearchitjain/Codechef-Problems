#include<iostream>
using namespace std;
int main(){
    int l, b;
    cin >> l >> b;
    int a = l * b;
    int p = 2 * (l + b);
    if (a>p) {
        cout << "Area" << endl<<a;
    }
    else if(p>a){
        cout << "Peri" << endl<<p;
    }
    else
        cout << "Eq" << endl<<a;
    


    return 0;
}
