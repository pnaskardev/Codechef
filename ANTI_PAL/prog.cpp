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
    string s;
    cin>>s;
    if(n%2!=0)
    {
        cout<<"NO"<<endl;
        return;
    }
    unordered_map<int,int>mp;
    for(auto i:s)
    {
        mp[i]++;
    }
    if(mp.size()==1)
    {
        cout<<"NO"<<endl;
        return;
    }
    vector<pair<int,char>>arr;
    for(auto i:mp)
    {
        if(i.second>(n/2))
        {
            cout<<"NO"<<endl;
            return;
        }
        else
        {
            arr.push_back({i.second,i.first});
        }
    }
    sort(arr.begin(),arr.end());
    cout<<"YES"<<endl;
    for(auto i:arr)
    {
        while(i.first>0)
        {
            cout<<i.second;
            i.first--;
        }
    }
    cout<<endl;
}