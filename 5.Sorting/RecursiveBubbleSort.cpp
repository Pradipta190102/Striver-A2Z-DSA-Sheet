#include<bits/stdc++.h>
using namespace std;
void BubbleSort(int arr[],int e)
{
    if(e==0)
    {
       return;
    }
    for(int i=0;i<e;i++)
    {
          if(arr[i]>arr[i+1])
          {
            swap(arr[i],arr[i+1]);
          }  
    }
    BubbleSort(arr,e-1);
}
int main()
{
int n;
cin>>n;
int arr[n]; 
for(int i=0;i<n;i++)
{
  cin>>arr[i];
}
BubbleSort(arr,n-1);
for(int i=0;i<n;i++)
{
  cout<<" "<<arr[i];
}
}
