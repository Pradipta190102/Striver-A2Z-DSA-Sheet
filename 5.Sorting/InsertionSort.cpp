//Insertion sort
//takes an element and places it in its correct position
//time complexcity= n*n (worst) and n(best)
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
for(int i=0;i<n;i++)
{
    for(int j=i;j>0;j--)
    {
       if(arr[j]<arr[j-1])
       {
        swap(arr[j],arr[j-1]);
       }
    }
}
    
for(int i=0;i<n;i++)
{
  cout<<" "<<arr[i];
}
}

