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
    int i,j,x,y;
    cin>>i>>j>>x>>y;
    int inital=(i+j)%2;
    int final=(x+y)%2;
    if(i==x && y==j)
    {
        cout<<0<<endl;
    }
    else if(inital!=final)
    {
        cout<<1<<endl;
    }
    else
    {
        cout<<2<<endl;
    }
}