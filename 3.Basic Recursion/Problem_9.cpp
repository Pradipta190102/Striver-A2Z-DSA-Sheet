//check if a string is palindrome or not using 
//recursion

#include<bits/stdc++.h>
using namespace std;
void PalinString(string s,int st, int e)
{
   if(st<=e)
   {
    if(s[st]==s[e])
    {
        PalinString(s,st+1,e-1);
    }
    else{
        cout<<"Not Palindrome";
        return;
    }
   }
   else{
    cout<<"Palindrome";
    return;
   }
}
int main()
{
  string s;
  cin>>s;
  PalinString(s,0,s.length()-1);
}