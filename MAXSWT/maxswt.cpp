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
    int n,d;
    cin>>n>>d;
    vector<int>price,sw;
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        int t;
        cin>>t;
        price.push_back(t);
        mp[i]++;
    }
    for(int i=0;i<n;i++)
    {
        int t;
        cin>>t;
        sw.push_back(t);
    }
    vector<pair<int,int>>arr;
    for(int i=0;i<n;i++)
    {
        arr.push_back(make_pair(price[i],sw[i]));
    }
    for(int i=0;i<n;i++)
    {
        int sum=d-price[i];
        if(mp.find(sum<=d)==mp.end())
        {
            arr[i].first=0;
            arr[i].second=0;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i].first<<"->"<<arr[i].second<<endl;
    }
    cout<<endl;  
}