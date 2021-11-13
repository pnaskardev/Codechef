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
    int a,b,p,q;
    cin>>a>>b>>p>>q;
    if(p%a==0 && q%b==0 && (p/a==q/b || abs(p/a-q/b)==1))
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    
}