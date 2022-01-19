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
    for(int i=0;i<q;i++)
    {
        char a;
        int t;
        cin>>a>>t;
        quer.push_back(make_pair(a,t));
    }
    int res=0;
    unordered_map<int,int>mp;
    unordered_map<int,int>::iterator it;
    for(int i=0;i<quer.size();i++)
    {
        if(quer[i].first=='+')
        {
            if(mp.find(quer[i].second)==mp.end())
            {
                counter++;
                mp[quer[i].second]++;
            }
            else
            {
                res=1;
                cout<<"Inconsistent"<<endl;
                return;
            }
        }
        else if(quer[i].first=='-')
        {
            if(mp.find(quer[i].second)==mp.end())
            {
                res=1;
                cout<<"Inconsistent"<<endl;
                return;
            }
            else
            {
                counter--;
                // cout<<quer[i].second<<endl;
                it=mp.find(quer[i].second);
                mp.erase(it);
            }
        }
        if(counter>m)
        {
            res=1;
            cout<<"Inconsistent"<<endl;
            return;
        }
    }
    cout<<"Consistent"<<endl;
}