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
    int n,m,q;
    cin>>n>>m>>q;
    vector<pair<char,int>>quer;
    int counter=0;
    int arr[n+1]={0};
    for(int i=0;i<q;i++)
    {
        char a;
        int t;
        cin>>a>>t;
        quer.push_back(make_pair(a,t));
    }
    int res=0;
    unordered_map<int,int>mp;
    for(int i=0;i<quer.size();i++)
    {
        if(quer[i].first=='+')
        {
            arr[quer[i].second]++;
            counter++;
            mp[quer[i].second]++;
        }
        else if(quer[i].first=='-')
        {
            // arr[quer[i].second]--;
            if(mp.find(quer[i].second)==mp.end())
            {
                res=1;
            }
            else
            {
                arr[quer[i].second]--;
                counter--;
            }
            
        }
        if(counter>m)
        {
            res=1;
        }
    }
    if(res==1)
    {
        cout<<"Inconsistent"<<endl;
    }
    else
    {
        cout<<"Consistent"<<endl;
    }
}