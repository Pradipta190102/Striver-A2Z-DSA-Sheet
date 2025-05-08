#include<bits/stdc++.h>
using namespace std;
int main()
{
  int m;
  cin>>m;
  for(int i=1;i<=m;i++)
  {
    for(int j=1;j<=i;j++)
    {
        cout<<j;
    }
    for(int k=1;k<=2*(m-i);k++)
    {
        cout<<" ";
    }

    for(int j=i;j>=1;j--)
    {
        cout<<j;
    }

    cout<<endl;
  }
}