
//factorial of first n natural numbers using
//parameterized recursion
#include<bits/stdc++.h>
using namespace std;
void PrintFact(int i,int prod)
{
    if(i==0)
    {
          cout<<prod;
        return;
    }

    PrintFact(i-1,prod*i);
      

}
int main()
{
  int m;
  cin>>m;
  PrintFact(m,1);
  
}