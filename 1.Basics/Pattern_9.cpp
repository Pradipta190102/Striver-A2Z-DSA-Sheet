#include<bits/stdc++.h>
using namespace std;
int main()
{
 int m;
 cin>>m;
 int n=2*m;
 for(int i=1;i<=n;i++)
 { 
    if(i<=n/2)
    {//Upper part
    for(int j=1;j<m-i+1;j++)
    {  //SPACE
          cout<<" ";
    }
    for(int k=1;k<=2*i-1;k++)
    { //STAR
        cout<<"*";
    }
    for(int j=1;j<m-i+1;j++)
    {//SPACE
          cout<<" ";
    }
}
//Lower part
else{
    for(int j=1;j<=(i-m)-1;j++)
    {  //SPACE
          cout<<" ";
    }
    for(int k=1;k<=2*(n-i)+1;k++)
    { //STAR
        cout<<"*";
    }
    for(int z=1;z<=(i-m)-1;z++)
    {//SPACE
          cout<<" ";
    }
}
   cout<<endl;
 }
}