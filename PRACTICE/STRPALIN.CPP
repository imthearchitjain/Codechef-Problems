/*#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int l1, l2;
    int flag;

    while(t--){
        cin >> l1;
        int a[l1];
        for( int i = 0; i < l1; i++)
        {
            cin >> a[i];
        }
        cin >> l2;
        int b[l2];
        for( int i = 0; i < l2; i++)
        {
            cin >> b[i];
        }
        for( int i = 0; i < l1; i++)
        {
            
            if (a[i] != b[0])
            {
                
                continue;
            }
            int k = 0;
            
            if (a[i] == b[k])
            {
                flag = 0;
                while (a[i] == b[k])
                {
                    i++;
                    k++;
                    flag = 1;

                }if(flag==1){
                    cout << "Yes" << endl;
                    break;
                }
                else if(flag==0){
                    continue;
                }
            }
                }if(flag!=1){
                    cout << "No" << endl;
                    break;
                }
    }

    return 0;

}*/
#include<iostream>
#include<string>
using namespace std;
int main(){
    int t,flag;
    cin >> t;
    string s1, s2;
    while(t--){
        cin >> s1 >> s2;
        int l1 = s1.length();
        int l2 = s2.length();
        flag = 0;
        for (int i = 0; i < l1; i++)
        {
            for (int j = 0; j < l2;j++){
                if(s1[i]==s2[j]){
                    cout << "Yes" << endl;
                    flag = 1;
                    break;
                }
            }if(flag==1){
                break;
            }
        }if(flag==0){
            cout << "No" << endl;
        }
    }

    return 0;
}
