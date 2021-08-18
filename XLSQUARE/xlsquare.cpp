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
    int n,a;
    cin>>n>>a;
    int ans=(int)sqrt(n);
    int res=ans*a;
    cout<<res<<endl;
}