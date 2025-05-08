//Prime Number check
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int m;
  cin>>m;
  int c=0;
  for(int i=2;i*i<=m;i++)
  {
    if(m%i==0)
    {
        cout<<"Not Prime number";
        c++;
        break;
    }
     
  }
  if(c==0)
  {
    cout<<"Prime number";
  }
}