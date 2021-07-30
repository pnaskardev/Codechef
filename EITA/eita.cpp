#include<iostream>
#include<bits/stdc++.h>
#define int long long int
using namespace std;
void solve();
int firstway(int x)
{
    return x*7;
}
int secondway(int y,int d,int z)
{
    return y*d+z*(7-d);
}
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
    int d,x,y,z;
    cin>>d>>x>>y>>z;
    if(firstway(x)>=secondway(y,d,z))
    {
        cout<<firstway(x)<<endl;
    }
    else
    {
        cout<<secondway(y,d,z)<<endl;
    }
}