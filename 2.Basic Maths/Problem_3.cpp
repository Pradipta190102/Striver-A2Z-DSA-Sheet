
//Palindrome check;
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
    c=c*10+d;
    m=m/10;
    
  }
 if(temp==c)
 {
    cout<<"Palindrome Number";
 }
 else{
    cout<<"Not Palindrome Number";
 }
}