
//Print 1 to n using recursion
#include<bits/stdc++.h>
using namespace std;
void PrintN(int i,int n)
{
    if(i>n)
    {
        return;
    }
    cout<<i<<"\n";
    PrintN(i+1,n);

}
int main()
{
  int m;
  cin>>m;
  PrintN(1,m);
  
}