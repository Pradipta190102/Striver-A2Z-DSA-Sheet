#include<bits/stdc++.h>
using namespace std;
int main()
{
  int m;
  cin>>m;
  int temp='E';
  for(int i=1;i<=m;i++)
  {
    for(int j=1;j<=i;j++)
    {
        char t=temp+j-i;
        cout<<t;
    }
    cout<<endl;
  }
}