#include<iostream>
using namespace std;

/*int power(int a,int n){
    
    int total=1;
    for (int i=1; i<=n; i++) {
        total=total*a;
    }return total;
}*/
int main()
{
   /* int a[]={1,2,3,4,5};
    
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
    
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        int a[n];
        int b[n];
        for (int i=0; i<n; i++) {
            cin>>a[i];
        }
        for (int i=0; i<n; i++) {
            cin>>b[i];
        }
        int max=20*a[0]-10*b[0];
        if(max<0){
            max=0;
        }
        for (int i=1;i<n; i++) {
            if(20*a[i]-10*b[i]>max){
                max=20*a[i]-10*b[i];
                if(max<0){
                    max=0;
                }
            }
        }cout<<max<<endl;
        
        
    }
    
    
}
