//number hasing using frequency array
//remember hasing using frequency array is
//only valid if highest element is less than 10^6
#include<bits/stdc++.h>
using namespace std;
int main()
{
 int n;
 cin>>n;
 int arr[n];
 int maxi=INT_MIN;
 for(int i=0;i<n;i++)
 {
    cin>>arr[i];
 }
 for(int i=0;i<n;i++)
 {
    if(arr[i]>maxi)
    {
        maxi=arr[i];
    }
 }
 int freqarr[maxi+1]={0};
 for(int i=0;i<n;i++)
 {
    freqarr[arr[i]]++;
 }
int fmax=INT_MIN,fmin=INT_MAX;
int xi,ni;
 for(int i=0;i<=maxi;i++)
 {
    if(freqarr[i]!=0){
    if(freqarr[i]>=fmax)
    {
       fmax=freqarr[i];
        xi=i;
    }
    if(freqarr[i]<=fmin)
    {
        fmin=freqarr[i];
        ni=i;
    }
}
 }
 cout<<xi<<" "<<ni;
}