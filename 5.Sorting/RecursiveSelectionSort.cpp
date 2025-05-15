#include<bits/stdc++.h>
using namespace std;

void SelectionSort(int arr[],int s, int size)
{
    if(s==size-1)
    {
        return;
    }
    int mini=INT_MAX;
    int idx;
    for(int i=s;i<size;i++)
    {
      if(arr[i]<=mini)
      {
        idx=i;
        mini=arr[i];
      }
    }
    swap(arr[s],arr[idx]);
    SelectionSort(arr,s+1,size);
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
SelectionSort(arr,0,n);
for(int i=0;i<n;i++)
{
  cout<<" "<<arr[i];
}
}
