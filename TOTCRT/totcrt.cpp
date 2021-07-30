#include<iostream>
#include<bits/stdc++.h>
#define int long long int
using namespace std;
void solve();
int32_t main(void)
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
void solve()
{
    int n;
    cin>>n;
    map<string,int>mp;
    vector<int>arr;
    int tot=3*n;
    while(tot--)
    {
        int a;
        string s;
        cin>>s>>a;
        if(mp.find(s)!=mp.end())
        {
            mp[s]=mp[s]+a;
        }
        else
        {
            mp.insert(pair<string,int>(s,a));
        }
        
    }
    for(auto it=mp.begin();it!=mp.end();it++)
    {
        arr.push_back(it->second);
    }
    sort(arr.begin(),arr.end());
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}