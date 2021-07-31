#include<iostream>
#include<bits/stdc++.h>
#define int long long int
using namespace std;
void solve();
int binary(int target,int arr[],int n,vector<pair<int,int>>vec);
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
    int arr[n];
    unordered_map<int,int>mp;
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
        mp[arr[i]]=0;
    }
    for(int i=1;i<=n;i++)
    {
        mp[arr[i]]++;
    }
    int sum=0;
    for(auto it:mp)
    {
        if(it.second>1)
        {
            int p=(n-it.second);
            p=p*(it.second);
            sum=sum+p;
        }
        else
        {
            sum=sum+n-1;
        }
    }
    cout<<sum<<endl;
}