#include<bits/stdc++.h>
using namespace std;
int main()
{
 int n;
 cin>>n;

 for(int i=1;i<=2*n;i++)
 { 
    if(i<=n){
    for(int j=1;j<=n-i+1;j++)
    {  //Star
          cout<<"*";
    }
    for(int k=1;k<=2*(i-1);k++)
    { //STAR
        cout<<" ";
       
    }
    for(int j=1;j<=n-i+1;j++)
    {  //star
          cout<<"*";
    }
 }
 else{
    for(int j=1;j<=i-n;j++)
    {
        cout<<"*";
    }
    for(int k=1;k<=2*(2*n-i);k++)
    {
        cout<<" ";
    }
    for(int j=1;j<=i-n;j++)
    {
        cout<<"*";
    }
 }
 cout<<endl;

 }
}