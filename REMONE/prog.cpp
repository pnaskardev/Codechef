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
    vector<int>a(n);
    vector<int>b(n-1);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++)
    {
        cin>>b[i];
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int ans=b[0]-a[1];
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        mp[a[i]]++;
    }
    for(int i=0;i<n-1;i++)
    {
        if(mp.find(b[i]-ans)==mp.end())
        {
            ans=b[0]-a[0];
            break;
        }
    }
    if(ans<=0)
    {
        cout<<b[0]-a[0]<<endl;
    }
    else
    {
        cout<<ans<<endl;
    }
}
    