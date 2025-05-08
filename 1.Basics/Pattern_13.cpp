#include<bits/stdc++.h>
using namespace std;
int main()
{
  int m;
  cin>>m;
  int count=1;
  for(int i=1;i<=m;i++)
  {
    for(int j=1;j<=i;j++)
    {
        cout<<count;
        count++;
    }
    cout<<endl;
  }
}