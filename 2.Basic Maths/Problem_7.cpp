//Euclidean algo for finding GCD
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int m,n;
  cin>>m>>n;
  while(m!=0 && n!=0)
  {
    if(m>n)m=m%n;
    else n=n%m;
    
    if(m==0)
    {
        cout<<n;
        break;
    }
    if(n==0)
    {
        cout<<m;
        break;
    }
  }
}