

#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    int n;
    int countE,countO;
    while(t--){
        cin>>n;
        countE =0;
        countO=0;
        if(n%2==0){
            countE++;
        }
        else countO++;
        
    }
    if(countE>countO){
        cout<<"READY FOR BATTLE"<<endl;
    }
    else cout<<"NOT READY"<<endl;

    return 0;
}
