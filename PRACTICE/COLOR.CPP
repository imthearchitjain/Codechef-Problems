#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin >> t;
    int n,countR,countB,countG;
    string s;

    while(t--){
        cin >> n;
        cin >> s;
        countB = 0;
        countG = 0;
        countR = 0;
        int x = s.length();
        for (int i = 0; i < x;i++){
            if(s[i]=='R'){
                countR++;
            }
             if(s[i]=='G'){
                countG++;
            }
             if(s[i]=='B'){
                countB++;
            }
            
        }
      
        int ans = x - max(max(countR, countG), countB);
        cout << ans << endl;
    }

    return 0;
}
