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
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    vector<pair<char,int>>arr;
    for(int i=0;i<n;i++)
    {
        arr.push_back(make_pair(s[i],i));
    }
    int flag=0,start,end=0,grp=0;
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i].first=='1'&&flag==0)
        {
            flag=1;
            start=arr[i].second+1;
            end=arr[i].second+1;
        }
        if(arr[i].first=='1'&& flag==1)
        {
            int temp=i+1;
            if(abs(start-temp)<=k)
            {
                grp++;
                end=i+1;
            }
            else if(end!=0 && abs(end-i)<k)
            {
                grp++;
                end=i-1;
            }
        }
    }
    cout<<grp<<endl;
    cout<<endl;
}