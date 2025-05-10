
//sum of first n natural numbers using
//functional recursion
#include<bits/stdc++.h>
using namespace std;
int PrintSum(int i)
{
    if(i==0)
    {
        return 0;
    }
    return i + PrintSum(i-1);
}
int main()
{
  int m;
  cin>>m;
  cout<<PrintSum(m);
  
}