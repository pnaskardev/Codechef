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
    int a,b,c;
    cin>>a>>b>>c;
    if(2*b==c+a)
    {
        cout<<c+(b-a)<<endl;
    }
    else
    {
        int diff=b/a;
        cout<<diff*c<<endl;
    }
}