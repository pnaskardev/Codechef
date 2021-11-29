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
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    vector<int>b(n);
    unordered_map<int,int>mp;
    int maxim=arr[arr.size()-1];
    for(int i=0;i<n;i++)
    {
        b[i]=maxim;
        if(maxim!=arr[i])
        {
            mp[arr[i]]=maxim-arr[i];
        }
    }
    int ans=0;
    for(auto i:mp)
    {
        ans=max(ans,i.second);
    }
    cout<<ans<<endl;
}