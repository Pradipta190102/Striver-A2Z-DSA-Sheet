
//factorial of first n natural numbers using
//functional recursion
#include<bits/stdc++.h>
using namespace std;
int PrintFact(int i)
{
    if(i==0)
    {
        return 1;
    }

   return i*PrintFact(i-1);
      

}
int main()
{
  int m;
  cin>>m;
  cout<<PrintFact(m);
  
}