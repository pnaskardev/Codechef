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
    int n,s;
    cin>>n>>s;
    int sum=0;
    sum=n*(n+1)/2;
    int ans=-1;
    if(sum>=s)
    {
        if(sum-s>=1 && sum-s<=n)
        {
            ans=sum-s;
        }
    }
    cout<<ans<<endl;
}