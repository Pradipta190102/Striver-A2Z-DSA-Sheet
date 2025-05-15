//Bubble sort
//pushes the max to the last by adjacent swaps
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
    
    int idx=i;
    int didSwap=0;
    for(int j=0;j<n-i;j++)
    {
       if(arr[j]>arr[j+1])
       {
        swap(arr[j],arr[j+1]);
        didSwap++;
       }
    }
    if(didSwap==0)
    {
        break;
    }
    
}
for(int i=0;i<n;i++)
{
  cout<<" "<<arr[i];
}
}

