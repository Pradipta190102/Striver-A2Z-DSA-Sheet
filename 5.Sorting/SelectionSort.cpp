//Selection sort
//select minimum and swap 
//time complexcity= n*n
#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
  cin>>arr[i];
}
for(int i=0;i<=n-2;i++)
{
    
    int idx=i; 
    for(int j=i;j<n;j++)
    {
        if(arr[j]<arr[idx])
        {
        
            idx=j;
        }
    }
    swap(arr[i],arr[idx]);
}
for(int i=0;i<n;i++)
{
  cout<<" "<<arr[i];
}
}

