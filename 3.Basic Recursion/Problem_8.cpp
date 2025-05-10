
//reverse an array
#include<bits/stdc++.h>
using namespace std;
void reverseArray(int arr[], int start, int end) {
   if (start < end) {
      swap(arr[start], arr[end]);
      reverseArray(arr, start + 1, end - 1);
   }
}
int main()
{
  int m;
  cin>>m;
  int arr[m];
  for(int i=0;i<m;i++)
  {
    cin>>arr[i];
  }
  reverseArray(arr,0,m-1);
    for(int i=0;i<m;i++)
  {
    cout<<" "<<arr[i];
  }
}