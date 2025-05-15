
//character hashing using arrays
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[26]={0};
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        arr[s[i]-'a']++;
    }
    for(int i=0;i<25;i++)
    {
        if(arr[i]!=0)
        {
            char temp='a'+i;
            cout<<temp<<"->"<<arr[i]<<'\n';
        }
    }
}