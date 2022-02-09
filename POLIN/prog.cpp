#include<iostream>
#include<bits/stdc++.h>
#define int long long int
using namespace std;
void solve();
int32_t main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
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
    vector<pair<int,int>>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i].first>>arr[i].second;
    }
    unordered_map<int,int>mp1;
    unordered_map<int,int>mp2;
    for(auto i:arr)
    {
        mp1[i.first]++;
    }
    for(auto i:arr)
    {
        mp2[i.second]++;
    }
    int ans=mp1.size()+mp2.size();
    cout<<ans<<endl;
}