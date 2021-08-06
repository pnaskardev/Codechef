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
    int g1,s1,b1;
    int g2,s2,b2;
    cin>>g1>>s1>>b1>>g2>>s2>>b2;
    if((g1+s1+b1)>(g2+s2+b2))
    {
        cout<<1<<endl;
    }
    else 
    {
        cout<<2<<endl;
    }
}