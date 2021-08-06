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
    unordered_map<int,int>mp;
    vector<int>arr;
    for(int i=0;i<4;i++)
    {
        int t;
        cin>>t;
        arr.push_back(t);
    }   
    for(int i=0;i<4;i++)
    {
        mp[arr[i]]++;
    }
    int counter=0,maxsecond=INT_MIN;
    for(auto i:mp)
    {
        if(i.first)
        {
            counter++;
        }
        maxsecond=max(i.second,maxsecond);
    }
    if(counter==4)
    {
        cout<<2<<endl;
    }
    else if(counter==3||counter==2)
    {
        if(maxsecond%2==0)
        {
            cout<<2<<endl;
        }
        else
        {
            cout<<1<<endl;
        }
    }
    else if(counter==1)
    {
        cout<<0<<endl;
    }
    
}