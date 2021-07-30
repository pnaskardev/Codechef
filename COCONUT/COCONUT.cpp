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
    int xa,xb,Xa,Xb;
    cin>>xa>>xb>>Xa>>Xb;
    int ans1,ans2;
    ans1=Xa/xa;
    ans2=Xb/xb;
    cout<<ans1+ans2<<endl;
}