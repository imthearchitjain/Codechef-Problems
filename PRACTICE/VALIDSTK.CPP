#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        int flag = 0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 0)
            {
                a[i] = -1;
            }
        }
            int sum=0;
            for(int i=0;i<n;i++){
                sum=sum+a[i];
                if(sum==-1){
                    flag=1;
                    break;
                }
            }
            if(flag==1){
                cout<<"Invalid"<<endl;
                
            }
            if(flag==0){
                cout<<"Valid"<<endl;
            }
        }


        return 0;
    }
