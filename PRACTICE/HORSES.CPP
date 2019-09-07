#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n,m;
  cin>>n;
  for(int i=0;i<n;i++)
  {
      cin>>m;
      long long int a[m];
      for(int j=0;j<m;j++)
        cin>>a[j];
     
      int d=abs(a[0]-a[1]);
      for(int k=0;k<m-1;k++)
          for(int l=1;l<m;l++)
              if(l!=k)
              {
                  int min=abs(a[k]-a[l]);
                  if(min<d)
                    d=min;
              }
      cout<<d<<endl;
  }
   return 0;
}
