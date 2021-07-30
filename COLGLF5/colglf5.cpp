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
    vector<pair<int,char>>arr;
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        int t;
        char a='f';
        cin>>t;
        arr.push_back(make_pair(t,a));
    }
    for(int i=0;i<m;i++)
    {
        int t;
        cin>>t;
        char a='c';
        arr.push_back(make_pair(t,a));
    }
    sort(arr.begin(),arr.end());
    int counter=0;
    char curr='f';
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i].second!=curr)
        {
            counter++;
            curr=arr[i].second;
        }
        else
        {
            continue;
        }
    }
    cout<<counter<<endl;
}