#include<bits/stdc++.h>
using namespace std;
int main()
{
  int m;
  cin>>m;
  int n=2*m-1;

  for(int i=1;i<=n;i++)
  {
    if(i<=m)
    {
        for(int j=1;j<=i;j++)
        {
           cout<<"*";
        }
    }
    else{
        for(int k=1;k<=n-i+1;k++)
        {
            cout<<"*";
        }
    }
    cout<<endl;
  }
  
  }
