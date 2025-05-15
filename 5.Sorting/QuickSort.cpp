//Quicksort
//Select a pivot element and place it in its correct postion 
//smaller on the left and larger on the right
//time complexcity= n*log(n) without extra space 
//required in mergesort
#include<bits/stdc++.h>
using namespace std;
int FuncPivot(int arr[],int low,int high)
{
    int pivot=arr[low];
    int i=low;
    int j=high;
    while(i<j)
    {
        while(arr[i]<=pivot && i<high)
        {
            i++;
        }
        while(arr[j]>pivot && j>low)
        {
            j--;
        }
        if(i<j)
        {
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[low],arr[j]);
    return j;
}
void QuickSort(int arr[],int s,int e)
{
  if(s<e)
  {
    int pivot=FuncPivot(arr,s,e);
    QuickSort(arr,s,pivot-1);
    QuickSort(arr,pivot+1,e);
  }
 
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
QuickSort(arr,0,n-1);
for(int i=0;i<n;i++)
{
  cout<<" "<<arr[i];
}
}