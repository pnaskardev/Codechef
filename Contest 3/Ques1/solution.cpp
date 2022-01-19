#include<iostream>
#include<bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(void)
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        arr[i]=(rand()%10);
    }
    // 2 #contigous block# 0 2 0
    if(arr[0]==2 && arr[arr.size()-3]==0 && arr[arr.size()-2]==2 && arr[arr.size()-1]==0)
    {
        cout<<"YES"<<endl;
    }
    //2 0 #contigous block# 2 0
    else if(arr[0]==2 && arr[1]==0 && arr[arr.size()-2]==2 && arr[arr.size()-1]==0)
    {
        cout<<"YES"<<endl;
    }
    // 2 0 2 #contigous block# 0
    else if(arr[0]==2 && arr[1]==0 && arr[2]==2 && arr[arr.size()-1]==0)
    {
        cout<<"YES"<<endl;
    }
    else if(arr[0]==2 && arr[1]==0 && arr[2]==2 && arr[3]==0)
    {
        cout<<"YES"<<endl;
    }
    else if(arr[arr.size()-4]==2 && arr[arr.size()-3]==0 && arr[arr.size()-2]==2 && arr[arr.size()-1]==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
