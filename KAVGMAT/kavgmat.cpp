//still in progresss
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define int long long int
void solve();
void prefixsum(vector<vector<int>> &arr, int n, int m)
{
    vector<vector<int>>res;
    res=arr;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            arr[i][j]+=arr[i][j-1]+arr[i-1][j]-arr[i-1][j-1];
        }
    }
}
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
    int n,m,k;
    cin>>n>>m>>k;
    vector<vector<int>>arr;
    arr.resize(n+1,vector<int>(m+1));
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>arr[i][j];
        }
    }
    prefixsum(arr,n,m);
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=m;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}