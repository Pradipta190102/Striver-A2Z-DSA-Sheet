
//Print name n times using recursion
#include<bits/stdc++.h>
using namespace std;
void PrintName(int i,int n)
{
    if(i>n)
    {
        return;
    }
    cout<<"Try2Hard"<<"\n";
    PrintName(i+1,n);

}
int main()
{
  int m;
  cin>>m;
  PrintName(1,m);
  
}