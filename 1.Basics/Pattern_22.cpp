#include<bits/stdc++.h>
using namespace std;
int main()
{
  int m;
  cin>>m;
  int count=m;
  for(int i=1;i<=2*m-1;i++)
  {
    for(int j=1;j<=2*m-1;j++)
    {
        int left=j-1;
        int right=2*m-j-1;
        int up=i-1;
        int down=2*m-i-1;
        
        cout<<(m-min(min(left,right),min(up,down)));

      
    }
    cout<<endl;
  }
}