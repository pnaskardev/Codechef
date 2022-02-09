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
    int x,y;
    cin>>x>>y;
    int infected=y;
    int uninfected=x-y;
    int ans=infected*2+uninfected;
    if(uninfected==0)
    {
        ans=ans-1;
    }
    cout<<ans<<endl;
}