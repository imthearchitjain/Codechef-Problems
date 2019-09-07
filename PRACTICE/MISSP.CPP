#include <iostream>
#include <string>
using namespace std;
int main()
{
    int t;
    int flag;
    int counter;
    cin >> t;
    int n,pos;
    while(t--){
        cin >> n;
        
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
      }
      for( int i = 0; i <n; i++)
      {
          counter = 0;
          for (int j = 0; j < n; j++)
          {
                if(a[i]==a[j]){
                    counter++;
                }
          }
          if(counter %2==1){
              cout << a[i]<<endl;
              break;
          }
      }
    
      
        
    }

    return 0;
}
