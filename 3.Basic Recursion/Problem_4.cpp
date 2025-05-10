
//sum of first n natural numbers using
//parameterized recursion
#include<bits/stdc++.h>
using namespace std;
void PrintSum(int i,int sum)
{
    if(i==0)
    {
          cout<<sum;
        return;
    }

    PrintSum(i-1,sum+i);
      

}
int main()
{
  int m;
  cin>>m;
  PrintSum(m,0);
  
}