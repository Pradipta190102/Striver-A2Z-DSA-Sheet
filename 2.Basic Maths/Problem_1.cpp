
//Count digits;
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int m;
  cin>>m;
  int c=0;
  while(m)
  {
    m=m/10;
    c++;
  }
  cout<<c;
}