#include<bits/stdc++.h>
using namespace std;
int main()
{
  int m;
  cin>>m;
  char ch='A';
  for(int i=1;i<=m;i++)
  {
    for(int j=1;j<=i;j++)
    { 
        char temp =ch+j-1;
        cout<<temp;
    }
    cout<<endl;
  }
}