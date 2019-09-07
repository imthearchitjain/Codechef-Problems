#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--){
        float n,v1,v2;
        cin >> n >> v1 >> v2;

        //stairs
        float d1 = sqrt(2) * n;
        float t1 = d1 / v1;

        //elevator
        float d2 = 2 *  n; 
        float t2 = d2 / v2;

        if(t1 > t2){
            cout << "Elevator" << endl;
        }
        else{
            cout << "Stairs" << endl;
        }
    }
}
