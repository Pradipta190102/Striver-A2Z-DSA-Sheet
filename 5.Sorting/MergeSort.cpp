//Insertion sort
//divide and merge
//time complexcity= n*log(n) 
#include<bits/stdc++.h>
using namespace std;
void Mergearr(int a[],int low, int mid,int high)
{
    vector<int>ans;
    int p1=low;
    int p2=mid+1;
    while(p1<=mid && p2<=high)
    {
        if(a[p1]<a[p2])
        {
          ans.push_back(a[p1]);
          p1++;
        }
        else{
             ans.push_back(a[p2]);
             p2++;
        }
    }
    while(p1<=mid)
    {
          ans.push_back(a[p1]);
          p1++;
    }
      while(p2<=high)
      {
         ans.push_back(a[p2]);
             p2++;
        }
        for(int i=low;i<=high;i++)
        {
          a[i]=ans[i-low];
        }
   
}
void MergeSort(int arr[],int s,int e)
{
    if(s>=e)
    {
        return;
    }
     int mid=(s+e)/2;
  MergeSort(arr,s,mid);
  MergeSort(arr,mid+1,e);
  Mergearr(arr,s,mid,e);
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
MergeSort(arr,0,n-1);
for(int i=0;i<n;i++)
{
  cout<<" "<<arr[i];
}
}
