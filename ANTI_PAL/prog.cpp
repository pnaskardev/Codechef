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
    string s;
    cin>>s;
    if(n%2!=0)
    {
        cout<<"NO"<<endl;
        return;
    }
    unordered_map<int,int>mp;
    for(auto i:s)
    {
        mp[i]++;
    }
    if(mp.size()==1)
    {
        cout<<"NO"<<endl;
        return;
    }
    sort(s.begin(),s.end());
    reverse(s.begin()+n/2,s.end());
    string t=s;
    reverse(t.begin(),t.end());
    for(int i=0;i<t.size();i++)
    {
        if(s[i]==t[i])
        {
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
    cout<<s<<endl;
}