//Print all factors
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int m;
  cin>>m;
  for(int i=1;i*i<=m;i++)
  {
    if(m%i==0)
    {
        cout<<" "<<i;
        if(m/i!=i)
        {
            cout<<" "<<m/i;
        }
    }
  }
}