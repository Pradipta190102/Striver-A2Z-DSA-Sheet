
//Armstrong check;
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int m;
  cin>>m;
  int temp=m;
  int c=0;
  while(m)
  {
    int d=m%10;
    c=c+d*d*d;
    m=m/10;
    
  }
 if(temp==c)
 {
    cout<<"Armstrong Number";
 }
 else{
    cout<<"Not Armstrong Number";
 }
}