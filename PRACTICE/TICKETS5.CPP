#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    while(n > 0){
        int flag=0;
        string s;
        cin >> s;
        if(s[0] == s[1]){
            flag=1;
        }
        else{
        for(int i=0;i < s.size()-2;i++){
            if(s[i] != s[i+2]){
                flag=1;

                break;
            }
            
        }
        }
        
    
    if(flag==1)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
    n--;
    }
    return 0;
}
