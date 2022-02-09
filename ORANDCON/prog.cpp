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
    int x;
    cin>>x;
    int p=0,q=0;
    while(p<q)
    {
        p+=pow(2,q);
        q++;
    }
    q++;
    p=x+pow(2,q);
    cout<<p<<" "<<0<<" "<<p<<endl;
}