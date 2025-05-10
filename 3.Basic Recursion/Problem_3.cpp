
//Print n to 1 using recursion
#include<bits/stdc++.h>
using namespace std;
void PrintN(int i,int n)
{
    if(i<1)
    {
        return;
    }
    cout<<i<<"\n";
    PrintN(i-1,n);

}
int main()
{
  int m;
  cin>>m;
  PrintN(m,m);
  
}