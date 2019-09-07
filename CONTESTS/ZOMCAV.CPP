/*#include<iostream>
#include <string>
#include <algorithm>
using namespace std;

int power(int a,int n){
    
    int total=1;
    for (int i=1; i<=n; i++) {
        total=total*a;
    }return total;
}*/
/*int main()
{
   int a[]={1,2,3,4,5};
    
    int lastDuplicate=0;
    int count;
    for(int i=0;i<6;i++){
        
        if(a[i]==a[i+1] && a[i]!=lastDuplicate){
        
                lastDuplicate=a[i];
            int j=i;
            count=0;
            while (a[j+1]==a[j]) {
                count++;
                j++;
            }
                cout<<a[i]<<" "<<count+ 1<<endl;
            }
          
            
        
        else continue;
        
    }

    int n;
    cin>>n;
    int i=1;
    while(power(2,i)<n)
    {
        i++;
        if(power(2,i)>n){
            cout<<power(2,i)<<endl;
            break;
        }
        
    }
*/
    
/*    int t;
    cin>>t;
    while (t--) {
        string s;
        cin>>s;
        for (int i=0; i<s.length(); i++) {
            if(s[i]=='1'){
                if(i-1>=0){
                    if(s[i-1]=='0'){
                        s[i-1]='1';
                          s[i]=-1;
                    }
                   else  if(s[i-1]=='1'){
                        s[i-1]='0';
                          s[i]=-1;
    
                
                    }
                    
                    
                    
                }if(i+1<=s.length()-1){
                    if(s[i-1]=='0'){
                        s[i-1]='1';
                        s[i]=-1;
                    }
                    else  if(s[i-1]=='1'){
                        s[i-1]='0';
                        s[i]=-1;
                }
                
            }
            
        }
        
        }
        for (int i=0; i<s.length(); i++) {
            if(s[i]=='0'){
                cout<<"LOSE"<<endl;
            }
            else cout<<"WIN"<<endl;
        }
}
}
*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        int a;
        vector <int >c;
        vector <int >h;
        for (int i=0; i<n; i++) {
            cin>>a;
            c.push_back(a);
        }
        
        for (int i=0; i<n; i++) {
            cin>>a;
            h.push_back(a);
        }
        vector<int>r(n+1,0);
        int k;
        int j;
        for (int i=0; i<n; i++) {
            if(i-c[i]<0){
                j=0;
            }
            else {j=i-c[i];}
            if(i+c[i]>=n){
                k=n-1;
                
            }
            else k=i+c[i];
            
            r[j]++;
            r[k+1]--;
        }
        for (int i=1; i<n; i++)
            r[i] += r[i-1];
        r.resize(n);
        int count=0;
        sort(r.begin(),r.end());
        sort(h.begin(),h.end());
        for (int i=0; i<n; i++) {
            if(h[i]!=r[i]){
                cout<<"NO"<<endl;
                break;
            }
            else count++;
            
        }if(count==n){
            cout<<"YES"<<endl;
        }
    }
    
    
    
}
