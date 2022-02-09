#include<iostream>
#include<bits/stdc++.h>
#define int long long int
using namespace std;
void solve();
int32_t main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
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
    n=2*n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    unordered_map<int,int>mp;
    unordered_map<int,int>::iterator it;
    for(int i=0;i<n;i++)
    {
        mp[arr[i]]++;
    }
    bool ans=true;
    for(int i=0;i<mp.size();i++)
    {
        if(mp.find(i)==mp.end())
        {
            break;
        }
        else 
        {
            it=mp.find(i);
            if(it->second==1)
            {
                ans=false;
                break;
            }
        }
    }
    if(ans==true)
    {
        cout<<"YES"<<endl;
        return;
    }
    cout<<"NO"<<endl;
}